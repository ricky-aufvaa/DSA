#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */ int
      n;
  cin >> n;
  int key;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> key;
    v.push_back(key);
  }
  int a;
  cin >> a;
  v.erase(v.begin() + (a - 1));
  int b, c;
  cin >> b >> c;
  v.erase(v.begin() + (b - 1), v.begin() + (c - 1));
  cout << v.size();
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i);
  }
  return 0;
}
