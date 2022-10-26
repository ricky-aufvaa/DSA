#include <iostream>
using namespace std;
int solution(int a, int b, int c) { return (c - a); }
int main() {
  int a, b, c;
  int t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    if (a <= 10 && a >= 1 && b <= 10 && b >= 1 && c <= 10 && c >= 1) {
      cout << solution(a, b, c);
    }
  }
}
