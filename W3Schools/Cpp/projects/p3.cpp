/*
    Simple Reverse Polish Notation Calculator

    Ex: "/ 3 + 2 1" == (1+2)/3
*/
#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

class Calculator {
    private:
        double res;
        stack<string> entries;
    
    public:
        //constructor
        Calculator();
        //other methods
        void inputVal(string entry);
        double calcVal();
};
Calculator::Calculator() {
    res = 0;
}
void Calculator::inputVal(string entry) {
    string val;
    //check
    if (!entries.empty()) {
        val = stack.pop();
        switch (val) {
            //number?
            case 
        }
    } else {
        val = entry; //nothing
    }

    entries.push(val);
}
double Calculator::calcVal() {
    res = 0; //reset

    while (!entries.empty()) {
        string entry = stack.pop();

    }

    return res;
}


//---MAIN
int main() {
    cout << "Welcome to Calculator!\n";
    Calculator myCalc;

    bool flag_running = true;
    while (flag_running) {
        //get numbers
        double number;
        cout << "Enter a number: ";
        while(!(cin >> number)) {
            cout << "Incorrect input. Try again: ";
            cin.clear(); //reset
            cin.ignore(10000, '\n');
        }

        //input results
        myCalc.inputVal(number);

        string reply;
        cout << "Finished?[Y/N]: ";
        cin >> reply;
        if (!reply.compare("Y")) {
            flag_running = false; //exit
        }
    }

    //print results
    cout << "Average: " << myCalc.calcAverage() << '\n';

    return 0;
}