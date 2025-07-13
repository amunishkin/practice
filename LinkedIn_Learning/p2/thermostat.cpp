#include "thermostat.h"

Thermostat::Thermostat(float t, unsigned int m, const std::string& s)
{
    temperature = t;
    mode = m;
    location = s;
}

Thermostat::~Thermostat()
{
    std::cout << "Thermostat at " << location << " is being destoried" << std::endl;
}

void Thermostat::displayStatus() const
{
    std::cout << "Temp: " << temperature << "\nMode: " << mode << "\nLoc: " << location << std::endl;
}
