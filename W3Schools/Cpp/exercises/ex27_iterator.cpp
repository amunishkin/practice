#include <iostream>
#include <vector>
#include <list>
//#include <stack> //not stack
//#include <queue> //not queue
#include <deque>
#include <set>
#include <map>
//algorithms pack, i.e. sorting and find
#include <algorithm>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMV", "Ford", "Mazda"};

    //create vector iterator, pointer to vector<string>
    //vector<string>::iterator it;

    //loop with iterator
    for (auto it = cars.begin(); it != cars.end(); ++it) { //C++11 allows auto
        cout << *it << '\n';
    }

    //normal print
    for (const string& car : cars) {
        cout << car << '\n';
    }

    list<string> buses = {"b1", "b2", "b3"};
    for (auto it = buses.begin(); it != buses.end(); ++it) {
        cout << "bus: " << *it << '\n';
    }

    deque<string> airplanes = {"a1", "a2"};
    for (auto it = airplanes.begin(); it != airplanes.end(); ++it) {
        cout << "air: " << *it << '\n';
    }

    //it is ordered assending (alphabetically)
    set<string> hoppers = {"ho1", "ha2"};
    for (auto it = hoppers.begin(); it != hoppers.end(); ++it) {
        cout << "hop: " << *it << '\n';
    }

    //it is reverse ordered by key
    map<string, int, greater<string>> people = { {"Apple", 0}, {"John", 32}, {"Bob", 27} };
    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << "person: " << it->first << " is " << it->second << '\n';
    }

    //use iterators for algorithm
    vector<int> numbers = {1, 5, 78, 3, 2};
    sort(numbers.begin(), numbers.end());
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << "Num: " << *it << '\n';
    }

    return 0;
}