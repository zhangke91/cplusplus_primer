#include <iostream>

int get_cnt() {
  static int cnt = 0;
  return cnt++;
}

int main() {
  for (int i = 0; i != 10; ++i) {
    std::cout << get_cnt() << std::endl;
  }
  return 0;
}
