// binary search
#include <iostream>
using namespace std;

bool bsearch(int *arr, int size, int key) {
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid] == key) {
      return 1;
    }
    if (key < arr[mid]) {
      e = mid - 1;
    }
    if (key > arr[mid]) {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return false;
}

int main() {
  int a[6] = {1, 5, 23, 34, 565, 777};
  cout << bsearch(a, 6, 565);
}
