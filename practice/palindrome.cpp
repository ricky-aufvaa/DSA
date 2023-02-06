#include <iostream>
using namespace std;

bool ifPalindrome(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[s.length() - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s = "abcdba";
  if (ifPalindrome(s)) {
    cout << "yes";
  } else {
    cout << "no";
  }
}
