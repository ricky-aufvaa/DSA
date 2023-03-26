#include <iostream>
using namespace std;

int power(int a, int n) {
  // base case
  if (n == 0)
    return 1;
  if (n == 1)
    return a;

  // recursive relation
  return 2 * power(a, n - 1);
}

int main() {
  int n;
  cin >> n;
  int ans = power(2, n);

  cout << ans;
}
