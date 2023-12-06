#pragma once

#include <string>

class Car {
   public:
    Car(std::string manufacturer,
        std::string model,
        std::string plateNumber,
        unsigned int year,
        float rentalPrice)
        : m_Manufacturer(manufacturer),
          m_Model(model),
          m_PlateNumber(plateNumber),
          m_Year(year),
          m_RentalPrice(rentalPrice),
          m_IsAvailable(true) {}

    static Car getFromConsole();

    const std::string &getManufacturer() const;
    const std::string &getModel() const;
    const std::string &getPlateNumber() const;
    const unsigned int &getYear() const;
    const float &getRentalPrice() const;
    const bool &getIsAvailable() const;

    void setIsAvailable(bool isAvailable);

    void display(unsigned int id);

   private:
    std::string m_Manufacturer;
    std::string m_Model;
    std::string m_PlateNumber;
    unsigned int m_Year;
    float m_RentalPrice;
    bool m_IsAvailable;
};