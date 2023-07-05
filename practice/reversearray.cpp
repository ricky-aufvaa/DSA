#include <iostream>
using namespace std;

void reverse_array(int *arr, int size) {
  for (int i = 0; i < size / 2; i++) {
    swap(arr[i], arr[(size - 1)]);
  }
}

void print_array(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  int arr[] = {2, 5, 6, 7};
  reverse_array(arr, 4);
  print_array(arr, 4);
}
