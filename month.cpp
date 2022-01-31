#include <iostream>

bool isLeap(int year) {
  if ((year % 4) != 0) {
    return false;
  }
  else if ((year % 100) != 0) {
    return true;
  }
  else if ((year % 400) != 0) {
    return false;
  }
  else {
    return true;
  }
}

int main() {
  int year;
  int month;
  std::cout << "Enter a year: ";
  std::cin >> year;
  std::cout << "Enter a month(1-12): ";
  std::cin >> month;
  bool leap = isLeap(year);
  if (month == 2 && leap == true) {
     std::cout << "29 days";
    }
  else if (month == 2) {
    std::cout << "28 days";
  }
  else if (month % 2 == 1) {
    std::cout << "31 days";
  }
  else {
    std::cout << "30 days";
  }
  return 0;
}