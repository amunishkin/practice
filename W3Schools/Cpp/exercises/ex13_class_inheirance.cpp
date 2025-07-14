/*
    Create a class Dog with a method bark() that prints "Woof!".

    Then call that method from main() using an object of the class.
*/
#include <iostream>
using namespace std;

class Dog {
    public:
        void bark();
};

void Dog::bark() {
    cout << "Woof!\n";
}

int main() {
    Dog dog1;
    dog1.bark();
    return 0;
}