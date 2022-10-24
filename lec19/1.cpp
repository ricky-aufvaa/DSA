#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(10);
  v.push_back(30);
  v.push_back(40);
  v.push_back(23);
  cout << "Finding 10  -->" << binary_search(v.begin(), v.end(), 40);
}
