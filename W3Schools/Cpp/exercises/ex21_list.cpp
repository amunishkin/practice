#include <iostream>
#include <list>
#include <string>
using namespace std;

//with command line arguments
int main(int argc, char* argv[]) {
    cout << "There are " << argc << " arguments\n";

    for (int cnt=0; cnt<argc; cnt++) {
        cout << cnt << ' ' << argv[cnt] << '\n';
    }

    //lists
    list<string> cars = {"Volvo", "BMV", "Ford", "Mazda"};

    //print it out
    for (string car : cars) {
        cout << car << '\n';
    }

    //access elements
    cout << cars.front() << '\n';
    cout << cars.back() << '\n';

    cars.front() = "Opel";
    cout << cars.front() << '\n';
    cars.back() = "Toyota";
    cout << cars.back() << '\n';

    cars.push_front("Telsa");
    cout << cars.front() << '\n';
    cars.push_back("VM");
    cout << cars.back() << '\n';

    cars.pop_front();
    cout << cars.front() << '\n';
    cars.pop_back();
    cout << cars.back() << '\n';

    cout << cars.size() << '\n';
    cout << cars.empty() << '\n';

    for (string car : cars) {
        cout << car << '\n';
    }

    int x = (5 > 7) ? 5 : 7;
    cout << x << '\n';

    return 0;
}