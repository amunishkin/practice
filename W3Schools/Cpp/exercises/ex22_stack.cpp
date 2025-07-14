#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> s;
    s = {"Hi", "Bye"};
    for (string ss : s) {
        cout << ss << '\n';
    }

    stack<string> cars;
    cars.push("Volvo");
    cout << cars.top() << '\n';
    cars.top() = "New Car";
    cout << cars.top() << '\n';

    cars.pop();
    cout << cars.size() << '\n';
    cout << cars.empty() << '\n';

    return 0;
}