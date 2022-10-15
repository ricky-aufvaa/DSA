/*
0
1  1
2  3   5
8 13 21
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int next = 0;
  int a = 0;
  int b = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      next = a + b;
      a = b;
      b = next;
      cout << next << " ";
    }
    cout << endl;
  }
}
