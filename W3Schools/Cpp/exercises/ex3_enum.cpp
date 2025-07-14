#include <iostream>
using namespace std;

enum class Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = Level::MEDIUM;

  switch (myVar) {
    case Level::LOW:
      cout << "Low Level";
      break;
    case Level::MEDIUM:
      cout << "Medium level";
      break;
    case Level::HIGH:
      cout << "High level";
      break;
  }
  return 0;
}