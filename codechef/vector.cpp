#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> v;
  int n;
  int key;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> key;
    v.push_back(key);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    cout << v.at(i);
  }
  return 0;
}
