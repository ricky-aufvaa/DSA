#include <iostream>
using namespace std;

bool bsearch(int *arr, int s, int e, int key) {
  // base case
  int mid = s + (e - s) / 2;
  if (s > e) {
    return false;
  }
  if (arr[mid] == key) {
    return true;
  }
  // recursion relation
  if (arr[mid] < key) {
    return bsearch(arr, mid + 1, e, key);
  } else {
    return bsearch(arr, s, mid - 1, key);
  }
}

int main() {
  int a[] = {1, 6, 7, 10};
  bool ans = bsearch(a, 0, 3, 8);
  cout << ans;
}
