#include <iostream>
using namespace std;

void changearrayvalue(int a[], int size) {
  a[0] = 500;
  cout << "outside the main function a[0]= " << a[0] << endl;
}

int main() {

  int a[2];
  a[0] = 2;
  cout << a[0] << endl;
  cout << a << endl; // NOTE - this acts LIKE a pointer.
  // example.
  changearrayvalue(a, 2);
  cout << "inside the main function a[0]= " << a[0] << endl;
}
