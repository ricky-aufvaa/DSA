#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(87);
  q.push(1230);
  q.push(79);
  cout << q.front() << endl;
  cout << q.size() << endl;
  cout << q.empty() << endl;
  q.pop();
  q.pop();

  cout << q.size() << endl;
  // int u = q.front();
  // cout << endl << u << endl;
}
