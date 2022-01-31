#include <iostream>

int main () {
  int a;
  int b;
  int c;
  std::cout << "Enter the first number: ";
  std::cin >> a;
  std::cout << "Enter the second number: ";
  std::cin >> b;
  std::cout << "Enter the third number: ";
  std::cin >> c;
  std::cout << std::endl;
  if (a < b && a < c) {
    std::cout << "The smaller of the three is " << a;
    return a;
    }
  else if (b < a && b < c) {
    std::cout << "The smaller of the three is " << b;
    return b;
    }
  else {
    std::cout << "The smaller of the three is " << c;
    return c;
  }
}