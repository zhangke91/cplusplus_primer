#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int divide(int a, int b) {
  return a / b;
}

int main() {
  using func = int(*)(int, int);
  vector<func> funcs{add, subtract, multiply, divide};
  int a = 6, b = 3;
  for (auto f : funcs) {
    cout << f(a, b) << endl;
  }
  return 0;
}
