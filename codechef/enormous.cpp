#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  int t[n];
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  for (int i = 0; i < n; i++) {
    if (t[i] % k == 0) {
      count++;
    }
  }
  cout << endl << count;
}
