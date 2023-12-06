#pragma once

#include <iostream>
#include <string>

class Car {
   public:
    Car(std::string manufacturer,
        std::string model,
        std::string plateNumber,
        unsigned int year,
        float rentalPrice,
        bool isAvailable)
        : m_Manufacturer(manufacturer),
          m_Model(model),
          m_PlateNumber(plateNumber),
          m_Year(year),
          m_RentalPrice(rentalPrice),
          m_IsAvailable(isAvailable) {}

    const std::string &getManufacturer() const;
    const std::string &getModel() const;
    const std::string &getPlateNumber() const;
    const unsigned int &getYear() const;
    const float &getRentalPrice() const;
    const bool &getIsAvailable() const;

    void setIsAvailable(bool isAvailable);

    friend std::ostream &operator<<(std::ostream &fmt, const Car &car) {
        fmt << "Car: " << std::endl
            << "\tManufacturer: " << car.m_Manufacturer << std::endl
            << "\tModel: " << car.m_Model << std::endl
            << "\tPlateNumber: " << car.m_PlateNumber << std::endl
            << "\tYear: " << car.m_Year << std::endl
            << "\tRentalPrice: " << car.m_RentalPrice << std::endl
            << std::boolalpha
            << "\tIsAvailable: " << car.m_IsAvailable << std::endl;
        return fmt;
    }

   private:
    std::string m_Manufacturer;
    std::string m_Model;
    std::string m_PlateNumber;
    unsigned int m_Year;
    float m_RentalPrice;
    bool m_IsAvailable;
};