// nCr program.
#include <iostream>
using namespace std;

int factorial(int x) {
  int fact = 1;
  for (int i = 1; i <= x; i++) {
    fact = fact * i;
  }
  return fact;
}

int nCr(int x, int y) {
  int nCr = (factorial(x)) / (factorial(y) * factorial(x - y));
  return nCr;
}

int main() {
  int n, r, y;
  cin >> n >> r;
  y = nCr(n, r);
  cout << y;
  return 0;
}
