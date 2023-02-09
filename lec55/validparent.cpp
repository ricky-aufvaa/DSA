#include <iostream>
#include <stack>
using namespace std;

bool matches(char &ch, char &top) {
  if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
      (ch == ']' && top == '[')) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string str;
  cin >> str;
  stack<char> s;
  for (int i = 0; i < str.length(); i++) {
    char ch = str[i];
    // for opening bracket
    if (ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    } else {
      // for closing bracket
      if (!s.empty()) {
        char top = s.top();
        if (matches(ch, top)) {
          s.pop();
        } else {
          cout << "not a valid parenthesis" << endl;
        }
      } else {
        cout << "not a valid parenthesis" << endl;
        s.push(ch);
      }
    }
  }
  if (s.empty()) {
    cout << "it was a valid parenthesis";
  }
}
