#include <iostream>
using namespace std;

void solution(int a, int b) {
  if (b > a) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int y;
    cin >> y;
    solution(x, y);
  }
  return 0;
}
