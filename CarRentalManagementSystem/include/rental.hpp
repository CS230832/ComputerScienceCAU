#pragma once

#include <string>

#include <car.hpp>
#include <customer.hpp>

class Rental {
   public:
    Rental(const Customer *pCustomer,
           Car *pCar,
           unsigned int rentalDays);

    ~Rental();

    const Customer *getCustomer() const;
    const Car *getCar() const;
    const unsigned int &getRentalDays() const;

    void display(unsigned int id);

   private:
    const Customer *m_pCustomer;
    Car *m_pCar;
    unsigned int m_RentalDays;
};