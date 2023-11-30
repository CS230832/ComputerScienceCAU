#include <iostream>

class BankAccount {
   public:
    BankAccount(unsigned int accountNumber,
                const char *accountHolderName,
                float balance,
                unsigned int *transactionHistory,
                unsigned int transactionHistorySize)
        : m_AccountNumber(accountNumber),
          m_AccountHolderName(accountHolderName),
          m_Balance(balance) {
        m_TransactionHistorySize = transactionHistorySize;
        m_TransactionHistory = new unsigned int[20];
        for (unsigned int i = 0; i < m_TransactionHistorySize; i++)
            m_TransactionHistory[i] = transactionHistory[i];
    }

    BankAccount(unsigned int accountNumber,
                std::string accountHolderName,
                float balance)
        : BankAccount(accountNumber,
                      accountHolderName.c_str(),
                      balance, nullptr, 0) {}

    BankAccount(unsigned int accountNumber,
                std::string accountHolderName)
        : BankAccount(accountNumber, accountHolderName, 0) {}

    BankAccount(unsigned int accountNumber)
        : BankAccount(accountNumber, "None") {}

    BankAccount(const BankAccount &other) {
        m_AccountNumber = other.m_AccountNumber;
        m_AccountHolderName = other.m_AccountHolderName;
        m_Balance = other.m_Balance;
        m_TransactionHistory = other.m_TransactionHistory;
        m_TransactionHistorySize = other.m_TransactionHistorySize;
    }

    void setName(std::string name) {
        m_AccountHolderName = name;
    }

    friend std::ostream &operator<<(std::ostream &fmt, const BankAccount &account) {
        fmt << "BankAccount:"
            << "\n\tAccount number: " << account.m_AccountNumber
            << "\n\tAccount holder name: " << account.m_AccountHolderName
            << "\n\tBalance: $" << account.m_Balance;

        fmt << "\n\tTransaction History:";
        for (unsigned int i = 0; i < 20; i++)
            fmt << "\n\t\t" << account.m_TransactionHistory[i];

        fmt << std::endl;
        return fmt;
    }

   private:
    unsigned int m_AccountNumber;
    std::string m_AccountHolderName;

   protected:
    float m_Balance;
    unsigned int *m_TransactionHistory;
    unsigned int m_TransactionHistorySize;

    friend class Transaction;
};

class Transaction {
   public:
    Transaction(unsigned int id, float value)
        : m_Id(id), m_Value(value) {}

    void apply(BankAccount &bankAccount) {
        bankAccount.m_Balance += m_Value;
        bankAccount.m_TransactionHistory[bankAccount.m_TransactionHistorySize++] = m_Id;
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
};

int main() {
    Transaction minusFive(1, -5.0f);
    Transaction plusTen(2, 10.0f);

    std::cout << "Transactions:\n"
              << minusFive << plusTen;

    BankAccount mine(0, "Muhammadxon", 1000000);
    BankAccount voris(mine);
    voris.setName("Voris");

    std::cout << mine << voris;

    minusFive.apply(mine);
    std::cout << mine << voris;

    plusTen.apply(mine);
    std::cout << mine << voris;

    return 0;
}