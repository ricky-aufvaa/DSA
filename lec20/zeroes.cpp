#include <iostream>
using namespace std;
void zero(int a[], int size) {
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] != 0) {
      a[k] = a[i];
      k++;
    }
  }
  while (k < size) {
    a[k] = 0;
    k++;
  }
  for (int i = 0; i < size; i++) {
    cout << a[i] << "\t";
  }
}
int main() {
  int a[7] = {3, 4, 0, 0, 5, 6, 10};
  zero(a, 7);
}
