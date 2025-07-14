#include <iostream>
using namespace std;

struct Car {
  string brand;
  int year;
};

void myFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car& c) {
  c.year++;
}

void hi(char* s) {
    s[0] = 'h';
    s[1] = 'i';
    s[2] = '\0';
}

void myFunction1(); // declaration

int main() {
  myFunction1();
  Car myCar = {"Toyota", 2020};
  updateYear(myCar);
  myFunction(myCar);

  char hello[5];
  hi(hello);
  cout << hello << "\n";

  auto add = [](int a, int b) { //lambda function with arguments
    return a + b;
  };
  cout << add(3, 4);

  return 0;
}

void myFunction1() {
  cout << "I just got executed!\n";
}