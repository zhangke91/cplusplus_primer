#include <iostream>

int main() {
  int a, b;
  while (std::cin >> a >> b) {
    try {
      if (b == 0) {
        throw std::runtime_error("b is zero");
      }
      std::cout << a / b << std::endl;
    } catch (std::runtime_error e) {
      std::cout << e.what() << "\nEnter y or n to continue" << std::endl;
      char ans;
      std::cin >> ans;
      if (!std::cin || ans == 'n') {
        break;
      }
    }
  }
  return 0;
}


