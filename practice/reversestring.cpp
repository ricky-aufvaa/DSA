#include <iostream>
using namespace std;

string rev(string &str, int s, int e) {
  // base case
  if (s > e)
    return str;
  swap(str[s], str[e]);
  return rev(str, s + 1, e - 1);
}

int main() {
  string str = "abcde";
  cout << rev(str, 0, str.length() - 1);
  cout << endl << str;
}
