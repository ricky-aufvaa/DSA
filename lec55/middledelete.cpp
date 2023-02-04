// delete middle element from stack
#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> s, int size, int count) {
  // base case

  if (count == size) {
    cout << "the size is " << size << endl;
    cout << "the top element is " << s.top() << endl;
    return;
  }
  s.pop();
  solve(s, size, count++);
}

int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);
  s.push(80);
  s.push(90);
  s.push(100);
  // cout << "the old size is " << s.size() / 2 << endl;
  int count = 1;
  solve(s, s.size(), count);
}
