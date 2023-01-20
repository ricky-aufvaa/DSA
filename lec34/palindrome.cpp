#include <iostream>
using namespace std;

bool palindrome(string &s, int i, int j) {
  // base case
  if (i > j) {
    return true;
  }
  if (s[i] == s[j]) {
    return palindrome(s, i + 1, j - 1);
  } else {
    return false;
  }
}

int main() {
  string s = "eaaarrraaae";
  bool ispalindrome = palindrome(s, 0, s.length() - 1);
  if (ispalindrome) {
    cout << "yes" << endl;
  } else {
    cout << "no";
  }
}
