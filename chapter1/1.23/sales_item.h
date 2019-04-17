#include <iostream>

using std::ostream;
using std::istream;
using std::string;
class SalesItem {
  friend ostream &operator<<(ostream&, const SalesItem &rhs);
  friend istream &operator>>(istream&, SalesItem &rhs);
 private:
  string isbn_;
  int copies_;
  double value_;
 public:
  string isbn() const {
    return isbn_;
  }
};

ostream &operator<<(ostream &os, const SalesItem &rhs) {
  os << rhs.isbn_ << " " << rhs.copies_ << " " << rhs.value_;
  return os;
}

istream &operator>>(istream &is, SalesItem &rhs) {
  is >> rhs.isbn_ >> rhs.copies_ >> rhs.value_;
  return is;
}


