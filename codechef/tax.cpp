#include <iostream>
using namespace std;

void solution(int x) {
  if (x > 100) {
    x = x - 10;
  }
  cout << x;
}

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    solution(a);
  }
  return 0;
}
