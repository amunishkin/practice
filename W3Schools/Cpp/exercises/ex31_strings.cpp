#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Geeks";

    s.erase(0, 1); //remove "G", now "e" is at 0

    string sub = s.substr(2, 2);
    cout << sub << endl;

    return 0;
}