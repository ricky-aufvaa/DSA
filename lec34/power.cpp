#include <iostream>
using namespace std;

int power(int a, int b) {
  // base case
  int ans = power(a, (b / 2));
  if (b == 0) {
    return 1;
  }
  if (a == 0) {
    return 0;
  }
  if (b % 2 == 0) {
    return ans * ans;
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  power(a, b);
}
