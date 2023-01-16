#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<bool> prime(n, true);
  prime[0] = prime[1] = false;
  int count = 0;
  for (int i = 2; i < n; i++) {
    if (prime[i]) {
      count++;
      for (int j = i * 2; j < n; j = j + i) {
        prime[j] = 0;
      }
    }
  }
  cout << count;
}
