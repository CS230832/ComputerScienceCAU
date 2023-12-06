#include <iostream>

#include <car.hpp>
#include <customer.hpp>
#include <rental.hpp>
#include <car_rental_system.hpp>

void mainPrompt(unsigned int* choice);

int main() {
    unsigned int choice = 0;

    CarRentalSystem mngr{};

    do {
        mainPrompt(&choice);
        switch (choice) {
            case 1: {
                mngr.addCar(Car::getFromConsole());
                break;
            }
            case 2: {
                mngr.addCustomer(Customer::getFromConsole());
                break;
            }
            case 3: {
                mngr.rentCar();
                break;
            }
            case 4: {
                mngr.returnCar();
                break;
            }
            case 5: {
                mngr.displayCars();
                break;
            }
            case 6: {
                mngr.displayAvailableCars();
                break;
            }
            case 7: {
                mngr.displayRentedCars();
                break;
            }
            case 8: {
                mngr.displayCustomers();
                break;
            }
            case 9: {
                mngr.displayRentals();
                break;
            }
            case 10:
                break;
            default:
                std::cerr << "There is no choice such as " << choice << std::endl;
        }
    } while (choice != 10);

    return 0;
}

void mainPrompt(unsigned int* choice) {
    std::cout << "1. Add a car" << std::endl;
    std::cout << "2. Add a customer" << std::endl;
    std::cout << "3. Rent a car" << std::endl;
    std::cout << "4. Return a car" << std::endl;
    std::cout << "5. Display all cars" << std::endl;
    std::cout << "6. Display all available cars" << std::endl;
    std::cout << "7. Display all rented cars" << std::endl;
    std::cout << "8. Display all customers" << std::endl;
    std::cout << "9. Display all rentals" << std::endl;
    std::cout << "10. Exit" << std::endl;
    std::cin >> *choice;
}
