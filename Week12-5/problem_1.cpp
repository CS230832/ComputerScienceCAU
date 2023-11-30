#include <iostream>

class BankAccount {
   public:
    BankAccount(unsigned int accountNumber,
                std::string accountHolderName,
                float balance)
        : m_AccountNumber(accountNumber),
          m_AccountHolderName(accountHolderName),
          m_Balance(balance) {}

    BankAccount(unsigned int accountNumber,
                const char *accountHolderName,
                float balance)
        : m_AccountNumber(accountNumber),
          m_AccountHolderName(accountHolderName),
          m_Balance(balance) {}

    BankAccount(unsigned int accountNumber,
                std::string accountHolderName)
        : BankAccount(accountNumber, accountHolderName, 0) {}

    BankAccount(unsigned int accountNumber)
        : BankAccount(accountNumber, "None") {}

    friend std::ostream &operator<<(std::ostream &fmt, const BankAccount &account) {
        fmt << "BankAccount:"
            << "\n\tAccount number: " << account.m_AccountNumber
            << "\n\tAccount holder name: " << account.m_AccountHolderName
            << "\n\tBalance: $" << account.m_Balance
            << std::endl;
        return fmt;
    }

   private:
    unsigned int m_AccountNumber;
    std::string m_AccountHolderName;
    float m_Balance;
};

int main() {
    BankAccount mine(0, "Muhammadxon", 1000000);

    std::cout << mine;

    return 0;
}
