#include <iostream>
using namespace std;

bool bsearch(int a[], int key, int s, int e) {
  int mid = s + (e - s) / 2;
  // base case
  if (s > e) {
    return false;
  }
  if (a[mid] == key) {
    return true;
  }
  // recursion relation
  if (a[mid] > key) {
    return bsearch(a, key, s, mid - 1);
  } else {
    return bsearch(a, key, mid + 1, e);
  }
}

int main() {
  int a[] = {1, 44, 56, 78, 99, 201, 214};
  cout << bsearch(a, 14, 0, 6);
}
