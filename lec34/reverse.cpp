#include <iostream>
using namespace std;

void reverse(string &s, int i, int j) {
  // base case

  if (i > j) {
    return;
  }
  // recursion relation
  // smallersolution(s, 0, s.length() - 1);
  swap(s[i], s[j]);
  reverse(s, i + 1, j - 1);
}

int main() {
  string str = "ebbt";
  reverse(str, 0, str.length() - 1);
  cout << str;
}
