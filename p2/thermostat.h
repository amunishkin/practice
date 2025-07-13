#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>

class Thermostat
{
public:
    Thermostat(float t, unsigned int m, const std::string& s);
    ~Thermostat();
    void displayStatus() const;

private:
    float temperature;
    unsigned int mode;
    std::string location;
};

#endif