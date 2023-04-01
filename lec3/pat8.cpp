#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int row = 1;
  while (row <= n) {
    int count = row;
    for (int col = 1; col <= row; col++) {
      cout << count;
      count++;
    }
    row++;
    cout << endl;
  }
}
