#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> &input, int val) {
  int start = 0, end = input.size() - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (input[mid] == val) {
      return mid;
    }
    if (val < input[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8};
  for (unsigned i = 0; i <= 9; ++i) {
    cout << binary_search(input, i) << endl;
  }
  return 0;
}
