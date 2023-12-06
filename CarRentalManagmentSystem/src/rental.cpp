#include <rental.hpp>

Rental::Rental(Customer* pCustomer, Car* pCar, unsigned int rentalDays) {
    m_pCustomer = pCustomer;
    m_pCar = pCar;
    m_RentalDays = rentalDays;
    m_IsReturned = false;

    m_pCar->setIsAvailable(false);
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

const bool& Rental::getIsReturned() const {
    return m_IsReturned;
}

void Rental::setIsReturned(bool isReturned) {
    m_IsReturned = isReturned;
}
