#include <iostream>
using namespace std;

bool isSorted(int *a, int size) {
  // base case
  if (size == 0 || size == 1) {
    return true;
  }
  // recursion relation
  if (a[0] > a[1]) {
    return false;
  } else {
    return isSorted(a + 1, size - 1);
  }
}

int main() {
  int a[] = {1, 5, 12, 16};
  bool ans = isSorted(a, 4);
  cout << ans << endl;
}
