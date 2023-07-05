#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int row = 1; row <= n; row++) {
    for (int col1 = 1; col1 <= n - row + 1; col1++) {
      count++;
      cout << count;
    }
    for (int col2 = 1; col2 <= row - 1; col2++) {
      cout << "*";
    }
    for (int col4 = 1; col4 <= row - 1; col4++) {
      cout << "*";
    }
    for (int col3 = 1; col3 <= n - row + 1; col3++) {
      cout << count;
      count--;
    }
    count = 0;
    cout << endl;
  }
}
