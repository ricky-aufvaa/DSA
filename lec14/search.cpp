// in a sorted and rotated array find an element.
#include <iostream>
using namespace std;

int pivot(int arr[], int size) {
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid] > arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}
int binarysearch(int arr[], int s, int e, int key) {

  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (key == arr[mid]) {
      return mid;
    } else if (key < arr[mid]) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }
  return -1;
}
int search(int arr[], int size, int key) {
  int pivot = pivot(arr, size);
  if (key > arr[0] && key < arr[pivot - 1]) {
    binarysearch(arr, 0, pivot - 1, key);
  } else {
    binarysearch(arr, pivot, size - 1, key);
  }
}

int main() {
  int a[5] = {7, 9, 1, 2, 3};
  search(a, 5, 9);
}
