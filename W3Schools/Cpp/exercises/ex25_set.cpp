#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    set<string> cars = {"Volvo", "BMV", "BMV", "Ford", "Mazda"};

    //print (unique two BMV is one), already sorted alphabetically (ascending)
    for (string car : cars) {
        cout << car << '\n';
    }

    //descending order now...
    set<int, greater<int>> numbers = {1,7,8,3,2,4,6,5};

    for (int num : numbers) {
        cout << num << '\n';
    }

    //adding
    cars.insert("Telsa");
    cars.insert("VM");

    for (string car : cars) {
        cout << car << '\n';
    }

    //removing
    cars.erase("VM");

    for (string car : cars) {
        cout << car << '\n';
    }

    //others
    cars.clear();
    cout << cars.size() << '\n';
    cout << cars.empty() << '\n'; //true

    return 0;
}