#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int number = 42;
    string str = to_string(number);
    cout << str << " we" << endl;

    stringstream ss;
    ss << number << " hi";
    cout << ss.str();
    return 0;
}