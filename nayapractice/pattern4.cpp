#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int row = 1; row <= n; row++) {
    for (int col = 0; col < n; col++) {
      cout << n - col;
    }
    cout << endl;
  }
}
