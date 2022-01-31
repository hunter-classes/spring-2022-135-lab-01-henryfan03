#include <iostream>

int main () {
  int a;
  int b;
  std::cout << "Enter the first number: ";
  std::cin >> a;
  std::cout << "Enter the second number: ";
  std::cin >> b;
  std::cout << std::endl;
  if (a < b) {
    std::cout << "The smaller of the two is " << a;
    return a;
  }
  else if (b < a) {
    std::cout << "The smaller of the two is " << b;
    return b;
  }
  return 0;
}