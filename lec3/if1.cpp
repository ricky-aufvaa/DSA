// positive negative or neutral
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << "hello" << endl;
  if (n > 0) {
    cout << "n is positive" << endl;
  } else if (n < 0) {
    cout << "n is negative " << endl;
  } else {
    cout << "n is 0 " << endl;
  }
  return 0;
}
