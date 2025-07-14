#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    while(!(cin >> number)) { //keep asking until a valid int
        cout << "Invalid input. Try again: ";
        cin.clear(); //reset error signal
        cin.ignore(10000, '\n'); //remove bad input
    }
    cout << "You entered: " << number;
}