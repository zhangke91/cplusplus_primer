#include <iostream>

void my_swap(int *i, int *j) {
  int tmp = *i;
  *i = *j;
  *j = tmp;
}

int main() {
  int i = 10, j = 20;
  my_swap(&i, &j);
  std::cout << i << " " << j << std::endl;
  return 0;
}
