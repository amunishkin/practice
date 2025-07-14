#include <iostream>
#include <algorithm>
#include <vector> //list, deque, set, map works with algorithm
#include <string>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMV", "Ford", "Mazda"};
    
    //sort
    sort(cars.rbegin(),cars.rend()); //reverse order
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << "car: " << *it << '\n';
    }

    //search
    auto it = find(cars.begin(), cars.end(), "BMV");
    cout << *it << '\n';

    //bounds
    vector<int> numbers = {1, 2, 5, 7, 8, 2};
    auto it2 = upper_bound(numbers.begin(), numbers.end(), 5);
    for (; it2 != numbers.end(); ++it2) {
        cout << "Num after 5: " << *it2 << '\n';
    }

    //min/max
    auto it_min = min_element(numbers.begin(), numbers.end());
    cout << "Min: " << *it_min << '\n';
    auto it_max = max_element(numbers.begin(), numbers.end());
    cout << "Max: " << *it_max << '\n';

    //copying
    vector<int> cp_numbers(6); //holds 6 elements currently
    cout << cp_numbers.size() << '\n';
    copy(numbers.begin(), numbers.end(), cp_numbers.begin());
    for (auto nit = cp_numbers.begin(); nit != cp_numbers.end(); ++nit) {
        cout << "cp num: " << *nit << '\n';
    }
    
    //replace all
    fill(numbers.begin(), numbers.end(), 35);
    for (auto nit = numbers.begin(); nit != numbers.end(); ++nit) {
        cout << "fill num: " << *nit << '\n';
    }

    return 0;
}