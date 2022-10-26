#include <iostream>
using namespace std;
int main() {
  int x, y;
  int t;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    cout << x / y + x % y << endl;
  }
}
