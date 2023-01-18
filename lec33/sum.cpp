#include <iostream>
using namespace std;

int getSum(int *a, int size) {
  // base case
  if (size == 0) {
    return 0;
  }
  if (size == 1) {
    return a[0];
  }
  // recursion relation
  int remainingPart = getSum(a + 1, size - 1);
  int sum = a[0] + remainingPart;
  return sum;
}

int main() {
  int a[] = {1, 2, 3, 10};
  int ans = getSum(a, 4);
  cout << ans;
}
