#include <array>
#include <iostream>
using namespace std;

void merge(int a[], int n, int b[], int m, int c[]) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n && j < m) {
    if (a[i] < b[j]) {
      c[k] = a[i];
      i++;
      k++;
    } else if (b[j] < a[i]) {
      c[k] = b[j];
      j++;
      k++;
    }
  }

  while (i < n) {
    c[k] = a[i];
    k++;
    i++;
  }
  while (j < m) {
    c[k] = b[j];
    j++;
    k++;
  }
  for (int i = 0; i < n + m; i++) {

    cout << c[i] << "\t";
  }
}
int main() {
  int a[5] = {1, 2, 4, 6, 8};
  int b[3] = {3, 5, 7};
  int c[8] = {0};
  merge(a, 5, b, 3, c);
}
