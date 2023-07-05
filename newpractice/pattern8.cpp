#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int row = 1; row <= n; row++) {

    char ch = 'A' + row - 1;
    for (int col = 1; col <= n; col++) {
      cout << ch;
    }
    cout << endl;
  }
}
