#include <iostream>
using namespace std;

bool lsearch(int *arr, int size, int key) {
  // base case
  if (size == 0) {
    return false;
  }
  // recursion relation
  if (arr[0] == key) {
    return true;
  } else {
    bool ans = lsearch(arr + 1, size - 1, key);
    return ans;
  }
}

int main() {
  int a[4] = {1, 2, 4, 5};
  if (lsearch(a, 4, 12)) {
    cout << "found";
  } else {
    cout << "not found";
  };
}
