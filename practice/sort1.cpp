#include <iostream>
using namespace std;

void sortarray(int *arr, int n) {
  // base case
  if (n == 0 || n == 1)
    return;
  // recursive relation
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
    }
  }
  sortarray(arr, n - 1);
}

void printarray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {6, 3, 5, 8, 2, 4};
  sortarray(arr, 6);
  printarray(arr, 6);
}
