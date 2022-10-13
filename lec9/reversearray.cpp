#include <iostream>
using namespace std;
void printarray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i];
  }
}

void ulta(int a[], int size) {
  int swap = 0;
  for (int i = 0; ((size - 1) - i) > i; i++) {
    int swap = a[i];
    a[i] = a[size - 1 - i];
    a[size - 1 - i] = swap;
  }
  cout << a[0] << endl;
  cout << a[size - 1] << endl;
}

int main() {
  int a[4] = {1, 2, 3, 4};
  ulta(a, 4);
  printarray(a, 4);
}
