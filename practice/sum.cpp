#include <iostream>
using namespace std;

void input(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}
void printarray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "  " << arr[i];
  }
}

int main() {
  int size;
  cout << "enter the size" << endl;
  cin >> size;
  int arr[size];
  input(arr, size);
  printarray(arr, size);
  int sum = arr[0];
  for (int i = 1; i < size; i++) {
    sum = sum + *(arr + i);
  }
  cout << "sum===" << sum;
}
