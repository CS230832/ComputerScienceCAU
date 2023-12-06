#pragma once

#include <string>
#include <vector>

#include <car.hpp>
#include <customer.hpp>
#include <rental.hpp>

class CarRentalSystem {
   public:
    CarRentalSystem() {}

    void addCar(Car car);
    void addCustomer(Customer customer);
    void rentCar();
    void returnCar();
    void displayCars();
    void displayAvailableCars();
    void displayRentedCars();
    void displayCustomers();
    void displayRentals();

   private:
    std::vector<Car> m_Cars;
    std::vector<Customer> m_Customers;
    std::vector<Rental> m_Rentals;
};