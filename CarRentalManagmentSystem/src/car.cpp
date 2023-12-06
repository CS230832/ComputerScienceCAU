#include <car.hpp>

Car Car::getFromConsole() {
    std::string manufacturer;
    std::string model;
    std::string plateNumber;
    unsigned int year;
    float rentalPrice;

    std::cout << "Enter manufacturer: ";
    std::cin >> manufacturer;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter plate number: ";
    std::cin >> plateNumber;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter rental price: ";
    std::cin >> rentalPrice;

    return Car(manufacturer, model, plateNumber, year, rentalPrice);
}

const std::string &Car::getManufacturer() const {
    return m_Manufacturer;
}

const std::string &Car::getModel() const {
    return m_Model;
}

const std::string &Car::getPlateNumber() const {
    return m_PlateNumber;
}

const unsigned int &Car::getYear() const {
    return m_Year;
}

const float &Car::getRentalPrice() const {
    return m_RentalPrice;
}

const bool &Car::getIsAvailable() const {
    return m_IsAvailable;
}

void Car::setIsAvailable(bool isAvailable) {
    m_IsAvailable = isAvailable;
}
