#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void printCar(string car) {
    cout << car << "\n";
}

int main() {
    //create vector string
    vector<string> cars = {"Volvo", "BMV", "Ford", "Mazda"};

    //for-each loop over vector cars
    for (string car : cars) {
        cout << car << "\n";
    }

    //print out indexs
    cout << cars[2] << "\n";
    try {
        cout << cars.at(20) << "\n"; //preferred, since it throws an error.. try.catch
    } catch(...) {
        cout << "Error happened!" << "\n";
    }
    //access
    cars.at(0) = "New Car";

    //using built-in funcs
    cout << cars.front() << to_string(55) << 7 << "\n";
    cout << cars.back() << "\n";

    stringstream s;
    s << 66;
    cout << s.str() << "\n";

    //adding
    cars.push_back("Tesla");
    cout << cars.back() << "\n";
    cars.push_back("Ford");
    printCar(cars.back());

    //removing
    cars.pop_back();
    printCar(cars.back());

    //others
    cout << cars.size() << "\n";
    cout << cars.empty() << "\n";

    return 0;
}