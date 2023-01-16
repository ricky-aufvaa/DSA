#include <iostream>
using namespace std;
void sol(int flwg, int flwr) {
  if (flwg > (10 * flwr)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int main() {
  int t;
  int followers, following;
  cin >> t;
  while (t--) {
    cin >> following >> followers;
    sol(following, followers);
  }
}
