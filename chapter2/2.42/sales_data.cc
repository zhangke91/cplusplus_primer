#include <iostream>
#include <string>
#include "sales_data.h"

int main() {
  SalesData data;
  std::cin >> data.book_no >> data.unit_sold >> data.revenue;
  std::cout << data.book_no << " " << data.unit_sold << " " << data.revenue << std::endl;
  return 0;
}
