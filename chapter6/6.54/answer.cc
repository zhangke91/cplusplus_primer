#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b) {
  return a + b;
}

int main() {
  using func = int(*)(int, int);
  vector<func> funcs{add};
  cout << funcs[0](1, 2) << endl;
  return 0;
}


