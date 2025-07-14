#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> cars;
    cars.push("Volvo");
    cars.push("BMV");
    cars.push("Ford");
    cars.push("Mazda");

    //access elements
    cout << cars.front() << '\n';
    cout << cars.back() << '\n';

    cars.front() = "hi";
    cout << cars.front() << '\n';
    cars.back() = "bye";
    cout << cars.back() << '\n';

    cars.pop();
    cout << cars.front() << '\n'; //now BMV

    cout << cars.size() << '\n'; //3
    cout << cars.empty() << '\n'; //false

    return 0;
}