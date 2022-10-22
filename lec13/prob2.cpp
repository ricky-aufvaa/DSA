// find peak element in mountain array.

#include <iostream>
using namespace std;
int peak(int arr[], int size) {
  int s = 0;
  int e = size - 1;
  int mid = (s + e) / 2;
  while (s < e) {
    if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = (s + e) / 2;
  }
  return s;
}

int main() {
  int a[] = {1, 2, 3,
             4, 2, 0}; // note that binary search is only for sorted array. but
                       // this array can be seen into 2 parts. one is
                       // increasing and the otehr is dec.
  cout << peak(a, 6);
}
