#include <iostream>
using namespace std;
bool isprime(int i) {
  for (int a = 2; a <= i / 2; a++) {
    if (i % a == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++) {
      if (isprime(i)) {
        count++;
      }
    }
    cout << count;
  }
}
