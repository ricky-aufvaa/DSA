#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int row = n; row > 0; row--) {
    for (int col = 1; col <= ((2 * row) - 2); col++) {
      cout << " _ ";
    }
    for (int col2 = 1; col2 <= n - row + 1; col2++) {

      cout << n - row + col2;
    }
    cout << endl;
  }
}
