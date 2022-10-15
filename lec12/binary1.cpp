#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int first = 0;
  int last = size - 1;
  int mid = (first + last) / 2;

  while (first <= last) {
    if (arr[mid] == key) {
      return mid;
    } else if (key > arr[mid]) {
      first = mid + 1;
    } else if (key < arr[mid]) {
      last = mid - 1;
    }
    mid = (first + last) / 2;
  }
  return -1;
}

int main() {
  int even[6] = {1, 2, 3, 11, 12, 13};
  int odd[7] = {1, 2, 3, 4, 11, 12, 13};
  int search = binarySearch(odd, 7, 133);
  cout << "the index where the key is located is " << search;
}
