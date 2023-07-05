#include <iostream>
using namespace std;

void input(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}
void printarray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "   " << arr[i];
  }
  cout << endl;
}

int main() {
  int size;
  cout << "enter the size of the array";
  cin >> size;
  int arr[size];
  input(arr, size);
  printarray(arr, size);
  for (int i = 0; i < size - 1; i = i + 2) {
    swap(arr[i], arr[i + 1]);
  }
  printarray(arr, size);
}
