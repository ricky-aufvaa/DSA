// printing sum of all numbers of an array.
#include <iostream>
using namespace std;

int sumArray(int a[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum = sum + a[i];
  }
  return sum;
}

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  cout << sumArray(a, 5);
}
