#include <iostream>
using namespace std;
void printArray(char array[], int size) {
  for (int i = 0; i < size; i++) {
    // I want to seee the default values of an array.
    cout << array[i] << endl;
  }
}

int main() {
  int a[5];
  // printArray(a, 5);
  char b[5];
  printArray(b, 5);
}
