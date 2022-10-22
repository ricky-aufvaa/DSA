#include <iostream>
using namespace std;
int findright(int arr[], int size, int key) {
  int s = 0;
  int e = size - 1;
  int mid = (s + e) / 2;
  int ans = -1;
  while (s <= e) {
    if (key == arr[mid]) {
      // instead of returning this value of index we move to the left part of
      // the array.
      ans = mid;
      s = mid + 1;

    } else if (key > arr[mid]) {
      s = mid + 1;
    }

    else if (key < arr[mid]) {
      e = mid - 1;
    }
    mid = (s + e) / 2;
  }
  return ans;
}
int findleft(int arr[], int size, int key) {
  int s = 0;
  int e = size - 1;
  int mid = (s + e) / 2;
  int ans = -1;
  while (s <= e) {
    if (key == arr[mid]) {
      // instead of returning this value of index we move to the left part of
      // the array.
      ans = mid;
      e = mid - 1;

    } else if (key > arr[mid]) {
      s = mid + 1;
    }

    else if (key < arr[mid]) {
      e = mid - 1;
    }
    mid = (s + e) / 2;
  }
  return ans;
}
int main() {
  int a[] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
  cout << findleft(a, 9, 3);
  cout << findright(a, 9, 3);
}
