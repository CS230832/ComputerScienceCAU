#pragma once

#include <iostream>
#include <string>

#include <car.hpp>
#include <customer.hpp>

class Rental {
   public:
    Rental(Customer *pCustomer,
           Car *pCar,
           unsigned int rentalDays);

    ~Rental();

    const Customer *getCustomer() const;
    const Car *getCar() const;
    const unsigned int &getRentalDays() const;
    const bool &getIsReturned() const;

    void setIsReturned(bool isReturned);

    friend std::ostream &operator<<(std::ostream &fmt, const Rental &rental) {
        fmt << "Rental: " << std::endl
            << "\tCustomer Name: " << rental.getCustomer()->getName() << std::endl
            << "\tCar Model: " << rental.getCar()->getModel() << std::endl
            << "\tRental Price: " << rental.getCar()->getRentalPrice() << std::endl
            << "\tRental Days: " << rental.m_RentalDays << std::endl
            << std::boolalpha
            << "\tIs Returned: " << rental.m_IsReturned << std::endl;
        return fmt;
    }

   private:
    Customer *m_pCustomer;
    Car *m_pCar;
    unsigned int m_RentalDays;
    bool m_IsReturned;
};