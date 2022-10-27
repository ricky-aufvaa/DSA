// my name is sarabjot
// ym eman si tojbaras

#include <iostream>
using namespace std;

void reverseword(char ch) { cout << ch; }

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if ((s[i] == ' ') || (s[i] == '\0')) {
      reverseword(s[i]);
      cout << s;

    } else {
      continue;
    }
  }
}
