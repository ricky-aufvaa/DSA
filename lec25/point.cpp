#include <iostream>
using namespace std;
int main() {
  int a = 5;
  int *p = &a;
  int b[4] = {1, 3, 5, 6};
  cout << b << endl;
  cout << b + 1 << endl;
  cout << *b << endl;
  cout << *(b + 1) << endl;
  cout << b << endl;
  cout << &b[0] << endl;
}
