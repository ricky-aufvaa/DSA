#include <iostream>
using namespace std;

void lsearch(int a[][2], int row, int col, int key) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (a[i][j] == key) {
        cout << key << " is found at " << i << j;
      }
    }
  }
}

int main() {
  int a[2][2] = {{1, 3}, {4, 5}};
  lsearch(a, 2, 2, 5);
}
