#include <iostream>
using namespace std;

int solution(int x, int y) {
  int c = x + y;
  cout << c;
  return c;
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    solution(a, b);
  }
}
