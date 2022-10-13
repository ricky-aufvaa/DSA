// alternate reverse an array part2.
#include <iostream>
#include <type_traits>
using namespace std;

void printarray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i];
  }
}

void ulta(int a[], int n) {
  for (int i = 0; i < n; i = i + 2) {
    if (i + 1 < n) {
      swap(a[i], a[i + 1]);
    }
  }
}
int main() {

  int a[5] = {1, 2, 3, 4, 5};
  ulta(a, 5);
  printarray(a, 5);
}
