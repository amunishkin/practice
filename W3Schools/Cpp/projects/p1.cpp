/*
    Write a program that:

    Asks for your name
    Asks for your age
    Prints: Hi <name>! You will turn <age+1> next year.

    Added error checking...
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    //first prompt
    string my_name;
    cout << "What is your name: ";
    bool finished_flag = false;
    while(!finished_flag) {
        cin >> my_name;
        auto it = my_name.begin();
        for (; it != my_name.end(); ++it) {
            if (*it>='0' && *it<='9') {
                //found contains a number
                cout << "Incorrect input. Number found. Try again: ";
                break;
            }
        }
        if (it==my_name.end()) { 
            finished_flag = true;
        }
    }

    //second prompt
    int my_age;
    cout << "What is your age: ";
    while(!(cin >> my_age)) {
        cout << "Incorrect input. Try again: ";
        cin.clear();
        cin.ignore(10000, '\n'); //clean-up
    }

    //final message
    cout << "Hi " << my_name << "! You will turn " << (my_age+1) << " next year.\n";

    return 0;
}