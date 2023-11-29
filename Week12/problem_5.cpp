#include <iostream>

/// @brief By default, uses celsius
class TemperatureSensor {
   public:
    TemperatureSensor(float temp) {
        m_Temp = temp;
    }

    float getTemp() const { return m_Temp; }
    float getTempInFahrenheit() const { return m_Temp * 9.0f / 5.0f + 32.0f; }
    float getTempInKelvin() const { return m_Temp + 273.15f; }

   private:
    float m_Temp;
};

void printTemp(const TemperatureSensor& temp) {
    std::cout << "In celsius: " << temp.getTemp() << std::endl;
    std::cout << "In fahrenheit: " << temp.getTempInFahrenheit() << std::endl;
    std::cout << "In kelvin: " << temp.getTempInKelvin() << std::endl;
}

int main() {
    TemperatureSensor temp(24.0f);

    printTemp(temp);

    return 0;
}