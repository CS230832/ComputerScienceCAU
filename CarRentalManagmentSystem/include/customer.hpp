#pragma once

#include <iostream>
#include <string>

class Customer {
   public:
    Customer(std::string name,
             std::string phoneNumber,
             std::string email)
        : m_Name(name),
          m_PhoneNumber(phoneNumber),
          m_Email(email) {}

    static Customer getFromConsole();

    const std::string &getName() const;
    const std::string &getPhoneNumber() const;
    const std::string &getEmail() const;

    friend std::ostream &operator<<(std::ostream &fmt, const Customer &customer) {
        fmt << "Customer: " << std::endl
            << "\tName: " << customer.m_Name << std::endl
            << "\tPhone Number: " << customer.m_PhoneNumber << std::endl
            << "\tEmail: " << customer.m_Email << std::endl;
        return fmt;
    }

   private:
    std::string m_Name;
    std::string m_PhoneNumber;
    std::string m_Email;
};