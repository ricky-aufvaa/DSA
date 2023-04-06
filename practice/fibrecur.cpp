#include <iostream>
using namespace std;

int fib(int n) {
  // base case
  if (n == 1)
    return 1;
  if (n == 0)
    return 0;

  int fi = fib(n - 1) + fib(n - 2);
  return fi;
}

int main() {
  int n;
  cin >> n;
  cout << fib(n);
}
