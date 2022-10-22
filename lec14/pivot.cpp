#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid] >= arr[0]) { // suppose mid is on 9
      // implies the arr[mid lies on the upper line.]
      s = mid + 1; // start goes to 1.
    } else {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return e;
}

int main() {
  int a[5] = {7, 9, 10, 2, 3};
  cout << "pivot index is " << getPivot(a, 5);
}
