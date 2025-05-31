//reverse order of individual digits
#include <iostream>

int main() {
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  std::cout << "Digits in reverse order: ";
  while (number > 0) {
    int digit = number % 10;
    std::cout << digit << " ";
    number /= 10;
  }
  std::cout << std::endl;

  return 0;
}