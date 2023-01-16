#include <iostream>
using namespace std;
int main() {
  int i = 10;
  int &j = i;
  cout << j << endl;
  j++;
  cout << j << endl;
  i++;
  cout << i << endl;
  cout << j << endl;
}
