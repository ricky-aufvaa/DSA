#include <iostream>
using namespace std;

string rev(string &s, int i) {
  // base case
  if (i > (s.length()) / 2)
    return s;
  swap(s[i], s[s.length() - i - 1]);
  return rev(s, i + 1);
}

int main() {
  string s = "sarab";
  cout << rev(s, 0);
  cout << endl << s[s.length()];
  cout << s;
}
