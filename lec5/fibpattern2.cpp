/*
1
1 2
1 2 3
1 2 3 5
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a = 0, b = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      int next = a + b;
      a = b;
      b = next;
      cout << next << " ";
    }
    cout << endl;
  }
}
