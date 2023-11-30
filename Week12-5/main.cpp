#include <iostream>

class BankAccount {
   public:
    BankAccount(const char *accountHolderName,
                float balance,
                unsigned int *transactionHistory,
                unsigned int transactionHistorySize)
        : m_AccountNumber(s_TotalAccounts++),
          m_AccountHolderName(accountHolderName),
          m_Balance(balance) {
        m_TransactionHistorySize = transactionHistorySize;
        m_TransactionHistory = new unsigned int[m_TransactionHistorySize];
        for (unsigned int i = 0; i < m_TransactionHistorySize; i++)
            m_TransactionHistory[i] = transactionHistory[i];
    }

    BankAccount(std::string accountHolderName,
                float balance)
        : BankAccount(accountHolderName.c_str(),
                      balance, nullptr, 0) {}

    BankAccount(std::string accountHolderName)
        : BankAccount(accountHolderName, 0) {}

    BankAccount()
        : BankAccount("None") {}

    BankAccount(const BankAccount &other) {
        m_AccountNumber = s_TotalAccounts++;
        m_AccountHolderName = other.m_AccountHolderName;
        m_Balance = other.m_Balance;
        m_TransactionHistorySize = other.m_TransactionHistorySize;
        m_TransactionHistory = new unsigned int[m_TransactionHistorySize];
        for (unsigned int i = 0; i < m_TransactionHistorySize; i++)
            m_TransactionHistory[i] = other.m_TransactionHistory[i];
    }

    BankAccount(const BankAccount &&account) {
        this->m_AccountNumber = s_TotalAccounts++;
        this->m_AccountHolderName = account.m_AccountHolderName;
        this->m_Balance = account.m_Balance;
        this->m_TransactionHistorySize = account.m_TransactionHistorySize;
        this->m_TransactionHistory = new unsigned int[m_TransactionHistorySize];
        for (unsigned int i = 0; i < m_TransactionHistorySize; i++)
            this->m_TransactionHistory[i] = account.m_TransactionHistory[i];
    }

    void setName(std::string name) {
        m_AccountHolderName = name;
    }

    bool hasSameAccountNumber(const BankAccount &other) {
        return this->m_AccountNumber == other.m_AccountNumber;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const BankAccount &account) {
        fmt << "BankAccount:"
            << "\n\tAccount number: " << account.m_AccountNumber
            << "\n\tAccount holder name: " << account.m_AccountHolderName
            << "\n\tBalance: $" << account.m_Balance;

        if (account.m_TransactionHistorySize) {
            fmt << "\n\tTransaction History:";
            for (unsigned int i = 0; i < account.m_TransactionHistorySize; i++)
                fmt << "\n\t\t" << account.m_TransactionHistory[i];
        }

        fmt << std::endl;
        return fmt;
    }

    friend void transfer(BankAccount *from, BankAccount *to, float amount) {
        from->m_Balance -= amount;
        to->m_Balance += amount;
    }

   private:
    unsigned int m_AccountNumber;
    std::string m_AccountHolderName;

    static inline unsigned int s_TotalAccounts = 0;

   protected:
    float m_Balance;
    unsigned int *m_TransactionHistory;
    unsigned int m_TransactionHistorySize;

    friend class Transaction;
};

class Transaction {
   public:
    Transaction(float value)
        : m_Id(++s_TotalTransactions), m_Value(value) {}

    void apply(BankAccount &bankAccount) {
        bankAccount.m_Balance += m_Value;
        unsigned int *newTransactionHistory = new unsigned int[++bankAccount.m_TransactionHistorySize];
        for (unsigned int i = 0; i < bankAccount.m_TransactionHistorySize - 1; i++)
            newTransactionHistory[i] = bankAccount.m_TransactionHistory[i];
        newTransactionHistory[bankAccount.m_TransactionHistorySize - 1] = m_Id;
        bankAccount.m_TransactionHistory = newTransactionHistory;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const Transaction &transaction) {
        fmt << "Transaction:"
            << "\n\tId: " << transaction.m_Id
            << "\n\tTransaction value: $" << transaction.m_Value
            << std::endl;
        return fmt;
    }

   private:
    unsigned int m_Id;
    float m_Value;

    static inline unsigned int s_TotalTransactions = 0;
};

int main() {
    Transaction minusFive(-5.0f);
    Transaction plusTen(10.0f);

    std::cout << "Transactions:\n"
              << minusFive << plusTen;

    BankAccount mine("Muhammadxon", 1000000);
    BankAccount voris(mine);
    voris.setName("Voris");

    std::cout << mine << voris;

    minusFive.apply(mine);
    std::cout << mine << voris;

    plusTen.apply(mine);
    std::cout << mine << voris;

    transfer(&mine, &voris, 80000);

    std::cout << mine << voris;

    std::cout << std::boolalpha << mine.hasSameAccountNumber(voris) << std::endl;

    return 0;
}