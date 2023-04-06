#include <iostream>
#include <stack>
using namespace std;

void middle(stack<int> &s, int size, int n) {
  // base case
  if (n == size / 2) {
    s.pop();
    return;
  }
  int store = s.top();
  s.pop();
  middle(s, size, n - 1);
  s.push(store);
  return;
}

int main() {
  stack<int> s;
  s.push(23);
  s.push(45);
  s.push(809);
  s.push(56);
  middle(s, s.size(), s.size());
  cout << s.top();
  s.pop();
  cout << s.top();
  s.pop();
  cout << s.top();
}
