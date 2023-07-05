#include <iostream>
#include <type_traits>
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
void reverse(int *arr, int size) {
  int s = 0, e = size - 1;
  while (s < e) {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

int main() {
  int size;
  cout << "enter the size of the array." << endl;
  cin >> size;
  int arr[size];
  input(arr, size);
  printarray(arr, size);
  reverse(arr, size);
  printarray(arr, size);
}
