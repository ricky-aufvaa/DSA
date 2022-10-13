// alternate reverse an array part2.
#include <iostream>
using namespace std;

void printarray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i];
  }
}

void swap(int a[], int n) {
  int swap = 0;
  for (int i = 0; i < n; i = i + 2) {
    if (i + 1 < n) {
      swap = a[i];
      a[i] = a[i + 1];
      a[i + 1] = swap;
    }
  }
}

void ulta(int a[], int n) { swap(a, 5); }
int main() {

  int a[5] = {1, 2, 3, 4, 5};
  ulta(a, 5);
  printarray(a, 5);
}
