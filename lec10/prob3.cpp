// find unique element.

#include <iostream>
using namespace std;
int main() {
  int ans = 0;
  int a[5] = {1, 2, 2, 3, 3};
  for (int i = 0; i < 5; i++) {
    ans = ans ^ a[i];
  }
  cout << ans;
}
