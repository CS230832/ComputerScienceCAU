#include <customer.hpp>

Customer Customer::getFromConsole() {
    std::string name;
    std::string phoneNumber;
    std::string email;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter email: ";
    std::cin >> email;

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
