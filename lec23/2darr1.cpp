#include <iostream>
using namespace std;
int main() {
  int count = 0;
  int a[3][3];
  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      count++;
      cout << a[j][i];
    }
    cout << endl;
  }
  cout << endl << count;
}
