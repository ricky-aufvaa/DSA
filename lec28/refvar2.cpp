#include <iostream>
using namespace std;

void update(int &a) {
  a++;
} // this created a reference variable that refers to n.

int main() {
  int n = 10;
  update(n);
  cout << n << endl;
}
