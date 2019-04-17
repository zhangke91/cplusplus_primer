#include <iostream>
#include "sales_item.h"

using namespace std;

int main() {
  SalesItem curr, val;
  if (cin >> curr) {
    int cnt = 1;
    while (cin >> val) {
      if (val.isbn() == curr.isbn()) {
        ++cnt;
      } else {
        cout << "Transaction " << curr << " has occurred " << cnt << " times" << endl;
        curr = val;
        cnt = 1;
      }
    }
    cout << "Transaction " << curr << " has occurred " << cnt << " times" << endl;
  }
  return 0;
}

