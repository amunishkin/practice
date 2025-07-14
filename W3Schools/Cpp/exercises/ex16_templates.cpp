#include <iostream>
#include <string>
using namespace std;

template <typename T>
T add(T a, T b) {
  return a + b;
}

template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};

template <typename T1, typename T2>
class Pair {
  public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
      first = a;
      second = b;
    }

    void display() {
      cout << "First: " << first << ", Second: " << second << "\n";
    }
};

int main() {
  //function
  cout << add<int>(5, 3) << "\n";
  cout << add<double>(2.5, 1.5) << "\n";

  //class box
  Box<int> intBox(50);
  Box<string> strBox("Hello");

  intBox.show();
  strBox.show();

  //class pair
  Pair<string, int> person("John", 30);
  Pair<int, double> score(51, 9.5);

  person.display(); 
  score.display(); 

  return 0;
}