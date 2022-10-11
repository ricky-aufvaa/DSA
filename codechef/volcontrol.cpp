#include <iostream>
using namespace std;
int main() {
  int X, Y;
  cin >> X >> Y;
  if ((X - Y) < 0) {
    cout << (-1) * (X - Y) << endl;
  } else {
    cout << (X - Y) << endl;
  }
}
