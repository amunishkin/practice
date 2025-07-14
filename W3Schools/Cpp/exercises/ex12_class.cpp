/*
    Create a class called Book with the following attributes:

    title (string)
    author (string)
    year (int)
    Then create two objects of the class and print their attribute values.

    Matilda, Roald Dahl, 1988
    The Giving Tree, Shel Silverstein, 1964
*/
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int year;
};

int main() {
    Book b1;
    b1.title = "Matilda";
    b1.author = "Roald Dahl";
    b1.year = 1988;

    Book b2;
    b2.title = "The Giving Tree";
    b2.author = "Shel Silverstein";
    b2.year = 1964;

    cout << b1.title << ", " << b1.author << ", " << b1.year << "\n";
    cout << b2.title << ", " << b2.author << ", " << b2.year << "\n";
}

