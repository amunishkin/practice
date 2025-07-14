#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar[2];
  car myCar1 = myCar[0];
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;
  myCar[0] = myCar1;

  // Create another car structure and store it in myCar2;
  car myCar2 = myCar[1];
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
  myCar[1] = myCar2;
 
  // Print the structure members
  for (car myCari : myCar) {
    cout << myCari.brand << " " << myCari.model << " " << myCari.year << "\n";
  }
  
  return 0;
}
