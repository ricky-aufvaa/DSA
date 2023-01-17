#include <iostream>
using namespace std;
int main() {
  int a[] = {22, 1, 4, 5, 3};
  int max = a[0];
  int min = a[0];
  int size = 5;
  for (int i = 0; i < size; i++) {
    if (a[i] > max) {
      max = a[i];
    } else if (a[i] < min) {
      min = a[i];
    }
  }
  cout << max << endl;
  cout << min << endl;
}
