#include <iostream>
using namespace std;

void printarray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i];
  }
}
int reverse(int *arr, int s, int e) {
  // base case
  if (s >= e) {
    return *arr;
  } else {
    swap(arr[s], arr[e]);
    return reverse(arr, s + 1, e - 1);
  }
}

int main() {
  int arr[4] = {2, 7, 4, 11};
  printarray(arr, 4);
  int s = 0, e = 3;
  reverse(arr, s, e);
  printarray(arr, 4);
}
