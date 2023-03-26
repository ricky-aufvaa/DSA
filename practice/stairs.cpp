#include <iostream>
using namespace std;

int stairs(int n) {
  // base case
  if (n == 0) {
    return 0;
  }
  if (n == 1)
    return 1;
  if (n == 2)
    return 2;

  // recursive relation
  int ans = stairs(n - 1) + stairs(n - 2);
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << stairs(n);
}
