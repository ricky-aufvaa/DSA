#include <cstdint>
#include <iostream>
using namespace std;

void rowsum(int a[][3], int row, int col) {
  int maxi = INT32_MIN;
  int index = 0;
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum = sum + a[i][j];
    }
    if (sum > maxi) {
      maxi = sum;
      index = i;
    }
  }
  cout << maxi << endl;
  cout << "max row is " << index << endl;
}

int main() {
  // 1 3 4   --->8
  // 5 8 0   --->13
  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  rowsum(a, 3, 3);
}
