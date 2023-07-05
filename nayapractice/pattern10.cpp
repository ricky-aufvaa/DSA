#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 1;
  for (int row = 1; row <= n; row++) {
    for (int col1 = 1; col1 <= n - row; col1++) {
      cout << "_";
    }
    for (int col2 = 1; col2 <= row; col2++) {
      cout << count;
      count++;
    }
    for (int col3 = 1; col3 <= row - 1; col3++) {
      cout << count - 2;
      count--;
    }
    for (int col4 = 1; col4 <= n - row; col4++) {
      cout << "_";
    }
    count = 1;
    cout << endl;
  }
}
