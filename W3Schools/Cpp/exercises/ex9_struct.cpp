/*
Create a structure to represent a student. It should have the following members:

name (string)
age (int)
grade (char)
Then:

Create one variable of the structure.
Assign values to its members.
Print the values to the screen.

Name: Liam
Age: 35
Grade: A
*/

#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    char grade;
};

int main() {
    student p1;
    p1.name = "Liam";
    p1.age = 35;
    p1.grade = 'A';

    cout << "Name: " << p1.name << "\n";
    cout << "Age: " << p1.age << "\n";
    cout << "Grade: " << p1.grade << "\n";

    return 0;
}