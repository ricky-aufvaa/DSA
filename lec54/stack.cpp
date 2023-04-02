
#include <iostream>
#include <stack>
using namespace std;
int main() {
  stack<int> s;
  // pushing into the stack
  s.push(23);
  s.push(45);
  cout << s.top() << endl;
  cout << "size of stack is " << s.size() << endl;

  // popping
  s.pop();
  cout << s.top() << endl;
  cout << "size of stack is " << s.size() << endl;
}
