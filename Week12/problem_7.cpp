#include <iostream>

class BankAccount {
   public:
    BankAccount(std::string name, float balance)
        : m_Name(name), m_Balance(balance) {}

    friend std::ostream &operator<<(std::ostream &fmt, const BankAccount &account) {
        std::cout << "BankAccount:\n\tname: " << account.m_Name
                  << "\n\tbalance: $" << account.m_Balance
                  << std::endl;
        return fmt;
    }

   protected:
    std::string m_Name;
    float m_Balance;

    friend class Transaction;
};

class Transaction {
   public:
    Transaction(float value)
        : m_Value(value) {}

    void apply(BankAccount *account) {
        std::cout << "Adding $" << m_Value << " to " << account->m_Name << std::endl;
        account->m_Balance += m_Value;
    }

   private:
    float m_Value;
};

int main() {
    BankAccount my("Muhammadxon", 100);

    std::cout << "Before transaction:\n"
              << my;

    Transaction adding(1000000000);

    adding.apply(&my);

    std::cout << "After transaction:\n"
              << my;

    return 0;
}