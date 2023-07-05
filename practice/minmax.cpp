#include <cstdint>
#include <iostream>
using namespace std;

void input(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void printarray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "   ";
  }
}

int main() {
  cout << "enter the size of the array" << endl;
  int n;
  cin >> n;
  int arr[n];

  input(arr, n);
  printarray(arr, n);

  int max = INT16_MIN;
  int min = INT16_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << "max element is " << max << endl;
  cout << "min element is " << min;
}
