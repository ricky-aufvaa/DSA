#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t, n, N, a;
  cin >> t;
  a = 0;
  int count = 0;
  while (t--) {
    cin >> N;
    int arr[2 * N];
    for (int i = 0; i < arr[2 * N]; i++) {
      if (arr[i] == arr[i + 1]) {
        count++;
      }
    }
    cout << count << endl;
  }
}
