#include <rental.hpp>

#include <iostream>

Rental::Rental(const Customer* pCustomer, Car* pCar, unsigned int rentalDays) {
    m_pCustomer = pCustomer;
    m_pCar = pCar;
    m_RentalDays = rentalDays;
}
Rental::~Rental() {
    m_pCar->setIsAvailable(true);
}
const Customer* Rental::getCustomer() const {
    return m_pCustomer;
}

const Car* Rental::getCar() const {
    return m_pCar;
}

const unsigned int& Rental::getRentalDays() const {
    return m_RentalDays;
}

void Rental::display(unsigned int id) {
    std::cout << "Rental " << id << std::endl
              << "\tcustomer name: " << m_pCustomer->getName() << std::endl
              << "\tcar model: " << m_pCar->getModel() << std::endl
              << "\tcar rental price: $" << m_pCar->getRentalPrice() << std::endl
              << "\trental days: " << m_RentalDays << std::endl;
}
