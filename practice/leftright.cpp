// leftmost and rightmost occourance
//[1,2,2,3,3,3]    - key =2;left =1. right = 2
#include <iostream>
using namespace std;

int right(int *arr, int s, int e, int key) {
  int mid = s + (e - s) / 2;
  int i = 0;
  while (s <= e) {
    if (arr[mid] == key) {
      i = mid;
      s = mid + 1;
    } else if (arr[mid] > key) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return i;
}

int left(int *arr, int s, int e, int key) {
  int mid = s + (e - s) / 2;
  int i = 0;
  while (s <= e) {
    if (arr[mid] == key) {
      i = mid;
      e = mid - 1;
    } else if (arr[mid] > key) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return mid;
}

int main() {
  int a[] = {1, 2, 2, 3, 3, 3};
  int leftans = left(a, 0, 5, 2);
  cout << leftans << endl;
  int rightans = right(a, 0, 5, 2);
  cout << rightans << endl;
}
