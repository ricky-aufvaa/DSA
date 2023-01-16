#include <iostream>
using namespace std;
int main() {
  int i = 6;
  int *p = &i;
  cout << p << endl;
  int *q = p;
  cout << q << endl;
  (*q)++;
  cout << i;
}
