#include <iostream>
using namespace std;
void sort(int a[], int size) {
  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size - 1; i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
      }
    }
  }
  for (int i = 0; i < size; i++) {
    cout << a[i] << "\t";
  }
}
int main() {
  int a[6] = {10, 1, 7, 6, 14, 9};
  sort(a, 6);
}
