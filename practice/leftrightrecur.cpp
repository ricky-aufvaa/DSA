#include <ios>
#include <iostream>
using namespace std;
bool found = false;
int left(int arr[], int s, int e, int key) {
  int mid = (s + e) / 2;
  int i = 0;
  if (s > e) {
    if (found)
      return s;
    else
      return -1;
  }
  if (arr[mid] == key) {
    found = true;
    return left(arr, s, mid - 1, key);
  }
  // recursion relation
  else if (key > arr[mid]) {
    return left(arr, mid + 1, e, key);
  } else {
    return left(arr, s, mid - 1, key);
  }
}

int main() {
  int a[] = {1, 2, 2, 3, 3, 3};
  int leftans = left(a, 0, 5, 2);
  cout << leftans << endl;
}
