#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    //key, value pairs, sorted ascending by key
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    //access
    cout << people.at("John") << '\n';
    people.at("John") = 50;
    cout << "John is: " << people.at("John") << '\n';

    //adding
    people.insert({"Jenny", 22});
    cout << people.at("Jenny") << '\n';

    //adding two elements with same key, keeps first one
    people.insert({"Bob", 31});
    people.insert({"Bob", 22});
    cout << "Bob is: " << people.at("Bob") << '\n';

    //removing
    people.erase("Bob");

    //others
    cout << "Bob here? " << people.count("Bob") << '\n';
    cout << people.size() << '\n';
    cout << people.empty() << '\n'; //false

    //loop
    for (auto person : people) {
        cout << person.first << " is: " << person.second << '\n';
    }

    return 0;
}