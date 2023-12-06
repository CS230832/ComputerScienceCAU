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
    std::string name;
    std::cout << "Enter customer's name: ";
    std::cin >> name;
    std::vector<Customer>::iterator itCustomer = std::find_if(m_Customers.begin(),
                                                              m_Customers.end(),
                                                              [&](const Customer &customer) {
                                                                  return customer.getName() == name;
                                                              });

    while (itCustomer == m_Customers.end() && m_Customers.size() > 0) {
        std::cout << "Enter customer's name: ";
        std::cin >> name;
        itCustomer = std::find_if(m_Customers.begin(),
                                  m_Customers.end(),
                                  [&](const Customer &customer) {
                                      return customer.getName() == name;
                                  });
    }

    std::string model;
    std::cout << "Enter car's model: ";
    std::cin >> model;
    std::vector<Car>::iterator itCar = std::find_if(m_Cars.begin(),
                                                    m_Cars.end(),
                                                    [&](const Car &car) {
                                                        return car.getModel() == model;
                                                    });

    while (itCar == m_Cars.end() && m_Cars.size() > 0) {
        std::cout << "Enter car's model: ";
        std::cin >> model;
        itCar = std::find_if(m_Cars.begin(),
                             m_Cars.end(),
                             [&](const Car &car) {
                                 return car.getModel() == model;
                             });
    }

    unsigned int rentalDays;
    std::cout << "Enter car's rental days: ";
    std::cin >> rentalDays;

    m_Rentals.push_back(Rental(&(*itCustomer), &(*itCar), rentalDays));
}

void CarRentalSystem::returnCar() {
    std::string name;
    std::cout << "Enter customer's name: ";
    std::cin >> name;
    std::vector<Customer>::iterator itCustomer = std::find_if(m_Customers.begin(),
                                                              m_Customers.end(),
                                                              [&](const Customer &customer) {
                                                                  return customer.getName() == name;
                                                              });

    while (itCustomer == m_Customers.end() && m_Customers.size() > 0) {
        std::cout << "Enter customer's name: ";
        std::cin >> name;
        itCustomer = std::find_if(m_Customers.begin(),
                                  m_Customers.end(),
                                  [&](const Customer &customer) {
                                      return customer.getName() == name;
                                  });
    }

    std::vector<Rental>::iterator itRental = std::find_if(m_Rentals.begin(),
                                                          m_Rentals.end(),
                                                          [&](const Rental &rental) {
                                                              return rental.getCustomer() == &(*itCustomer);
                                                          });

    if (itRental != m_Rentals.end()) {
        m_Rentals.erase(itRental);
    }
}

void CarRentalSystem::displayCars() {
    for (const Car &car : m_Cars)
        std::cout << car;
}

void CarRentalSystem::displayAvailableCars() {
    for (const Car &car : m_Cars)
        if (car.getIsAvailable())
            std::cout << car;
}

void CarRentalSystem::displayRentedCars() {
    for (const Car &car : m_Cars)
        if (!car.getIsAvailable())
            std::cout << car;
}

void CarRentalSystem::displayCustomers() {
    for (const Customer &customer : m_Customers)
        std::cout << customer;
}

void CarRentalSystem::displayRentals() {
    for (const Rental &rental : m_Rentals)
        std::cout << rental;
}
