#include <iostream>
using namespace std;

bool check(string str, int i) {
  // base case
  if (i > str.length() / 2) {
    return true;
  }
  if (str[i] == str[str.length() - i - 1])
    return check(str, i + 1);
  else {
    return false;
  }
}

int main() {
  string str = "acba";
  if (check(str, 0))
    cout << "it's a palindrome";
  else {
    cout << "it's not a palindrome";
  }
}
