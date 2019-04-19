#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if (b == 0) {
    throw std::runtime_error("b is zero");
  }
  std::cout << a / b << std::endl;
  return 0;
}
