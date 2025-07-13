#include "thermostat.h"

int main()
{
    Thermostat thermo = Thermostat(25, 2, "Bedroom");
    thermo.displayStatus();

    return 0;
}