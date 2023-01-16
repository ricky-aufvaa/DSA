#include <iostream>
using namespace std;

void print(int *s) {
  cout << "address -- " << s << endl;
  cout << "value --- " << *s << endl;
}

void update(int *p) { p = p + 1; }

int main() {
  int i = 5;
  int *p = &i;
  // print(p);
  cout << "before update -- " << p << endl;
  update(p);
  cout << "after update -- " << p << endl;
}
