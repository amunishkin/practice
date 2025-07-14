#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> cars = {"Volvo", "BMV", "Ford", "Mazda"};

    //print out
    for (string car : cars) {
        cout << car << '\n';
    }

    //access
    cout << cars.front() << '\n';
    cout << cars.back() << '\n';
    cout << cars.at(2) << '\n'; //3rd element

    //adding
    cars.push_front("New Car");
    cout << cars.front() << '\n';

    cars.push_back("Old Car");
    cout << cars.back() << '\n';

    //removing
    cars.pop_back();
    cout << cars.back() << '\n';
    cars.pop_front();
    cout << cars.front() << '\n';

    //others
    cout << cars.size() << '\n';
    cout << cars.empty() << '\n';

    //looping again
    for (string car : cars) {
        cout << car << '\n';
    }

    return 0;
}