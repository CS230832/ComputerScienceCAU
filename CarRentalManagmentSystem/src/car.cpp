#include <car.hpp>

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
