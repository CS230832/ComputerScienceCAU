#include <customer.hpp>

#include <iostream>

Customer Customer::getFromConsole() {
    std::string name;
    std::string phoneNumber;
    std::string email;

    std::cin.ignore();
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter email: ";
    std::getline(std::cin, email);

    return Customer(name, phoneNumber, email);
}

const std::string& Customer::getName() const {
    return m_Name;
}

const std::string& Customer::getPhoneNumber() const {
    return m_PhoneNumber;
}

const std::string& Customer::getEmail() const {
    return m_Email;
}

void Customer::display(unsigned int id) {
    std::cout << "Customer " << id << ":" << std::endl
              << "\tname: " << m_Name << std::endl
              << "\tphone number: " << m_PhoneNumber << std::endl
              << "\temail: " << m_Email << std::endl;
}
