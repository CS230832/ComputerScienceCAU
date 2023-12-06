#pragma once

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

    void display(unsigned int id);

   private:
    std::string m_Name;
    std::string m_PhoneNumber;
    std::string m_Email;
};