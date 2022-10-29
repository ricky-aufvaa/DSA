#include <iostream>
using namespace std;
void printarray(int a[][3], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
}
int main() {
  int a[3][3];
  for (int col = 0; col < 3; col++) {
    if (col % 2 == 0) {
      for (int row = 0; row < 3; row++) {
        cin >> a[row][col];
      }
    } else {
      for (int row = 3 - 1; row >= 0; row--) {
        cin >> a[row][col];
      }
    }
  }

  printarray(a, 3, 3);
}
