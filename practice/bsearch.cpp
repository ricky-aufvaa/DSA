#include <iostream>
using namespace std;

int input(int *arr, int size) {
  arr[0] = 2;
  arr[1] = 5;
  arr[2] = 7;
  arr[3] = 12;
  arr[4] = 13;
  arr[5] = 14;
  arr[6] = 15;
  return arr[size];
}

void print(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void binary(int *arr, int size, int key, int s, int e) {
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (key > arr[mid]) {
      s = mid + 1;
    } else if (key < arr[mid]) {
      e = mid - 1;
    } else {
      cout << "the element is present at " << mid;
      return;
    }
    mid = s + (e - s) / 2;
  }
  cout << "the element is at " << s;
}
int main() {
  int size = 7;
  int arr[size];
  input(arr, size);
  print(arr, size);
  int key = 15;
  binary(arr, size, key, 0, size - 1);
}
