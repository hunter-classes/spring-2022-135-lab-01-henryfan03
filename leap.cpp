#include <iostream>

int main() {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if ((year % 4) != 0) {
    std::cout << "It is a common year" << std::endl;
  }
  else if ((year % 100) != 0) {
    std::cout << "It is a leap year" << std::endl;
  }
  else if ((year % 400) != 0) {
    std::cout << "It is a common year" << std::endl;
  }
  else {
    std::cout << "It is a leap year" << std::endl;
  }
  return 0;
}