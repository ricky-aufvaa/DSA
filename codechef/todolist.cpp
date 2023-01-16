#include <iostream>
using namespace std;
int sol(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] >= 1000) {
      count++;
    }
  }
  return count;
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << sol(a, n) << endl;
  }
}
