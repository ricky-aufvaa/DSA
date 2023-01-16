#include <iostream>
using namespace std;

void solution(int x, int y) {
  if (2 * x > 5 * y) {
    cout << "Chocolate" << endl;
  } else if (2 * x < 5 * y) {
    cout << "Candy" << endl;
  } else {
    cout << "Either" << endl;
  }
}

int main() {
  // your code goes here
  int X, Y;
  int T;
  cin >> T;
  while (T--) {
    cin >> X >> Y;
    solution(X, Y);
  }
  return 0;
}
