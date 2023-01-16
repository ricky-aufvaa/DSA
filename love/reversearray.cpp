#include <iostream>
using namespace std;

// printarray
void printarray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i] << "  ";
  }
}
// swap()
void swap(int a[], int size) {
  int swap = 0;
  for (int i = 0; i < (size) / 2; i++) {
    int swap = a[i];
    a[i] = a[size - (i + 1)];
    a[size - (i + 1)] = swap;
  }
  printarray(a, size);
}
// input
int input(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  return arr[size];
}

// reverse()
void reverse(int a[], int size) { swap(a, size); }

int main() {
  int n;
  cin >> n;
  int a[n];
  input(a, n);
  reverse(a, n);
}
