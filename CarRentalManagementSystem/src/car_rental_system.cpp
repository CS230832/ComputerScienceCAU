#include <car_rental_system.hpp>

#include <iostream>
#include <algorithm>

void CarRentalSystem::addCar(Car car) {
    m_Cars.push_back(car);
}

void CarRentalSystem::addCustomer(Customer customer) {
    m_Customers.push_back(customer);
}

void CarRentalSystem::rentCar() {
    unsigned int customerId;
    unsigned int carId;
    unsigned int rentalDays;

    std::cin.ignore();

    do {
        std::cout << "Enter the id of the customer: ";
        std::cin >> customerId;
    } while (customerId >= m_Customers.size() && m_Customers.size());

CAR_ID:
    do {
        std::cout << "Enter the id of the car: ";
        std::cin >> carId;
    } while (carId >= m_Cars.size() && m_Cars.size());

    std::cout << "Enter rental days: ";
    std::cin >> rentalDays;

    if (m_Cars[carId].getIsAvailable()) {
        m_Rentals.push_back(Rental(&m_Customers[customerId], &m_Cars[carId], rentalDays));
        m_Cars[carId].setIsAvailable(false);
    } else {
        std::cerr << "This car is already booked!";
        goto CAR_ID;
    }
}

void CarRentalSystem::returnCar() {
    unsigned int rentalId;

    do {
        std::cout << "Enter the id of the rental: ";
        std::cin >> rentalId;
    } while (rentalId >= m_Rentals.size() && m_Rentals.size());

    m_Rentals.erase(m_Rentals.begin() + rentalId);
}

void CarRentalSystem::displayCars() {
    for (unsigned int i = 0; i < m_Cars.size(); i++)
        m_Cars[i].display(i);
}

void CarRentalSystem::displayAvailableCars() {
    for (unsigned int i = 0; i < m_Cars.size(); i++)
        if (m_Cars[i].getIsAvailable())
            m_Cars[i].display(i);
}

void CarRentalSystem::displayRentedCars() {
    for (unsigned int i = 0; i < m_Cars.size(); i++)
        if (!m_Cars[i].getIsAvailable())
            m_Cars[i].display(i);
}

void CarRentalSystem::displayCustomers() {
    for (unsigned int i = 0; i < m_Customers.size(); i++)
        m_Customers[i].display(i);
}

void CarRentalSystem::displayRentals() {
    for (unsigned int i = 0; i < m_Rentals.size(); i++)
        m_Rentals[i].display(i);
}
