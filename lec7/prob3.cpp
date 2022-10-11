// power of 2.
/* input 16. - output - true.
intput 8 - output - true . input 9 - output - false*/

#include "iostream"
#include "math.h"
#include <cmath>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int p = 0; p < 100; p++) {
    if (pow(2, p) == n) {
      count = 1;
    }
  }
  if (count == 1) {
    std::cout << "true";

  } else {
    cout << "false";
  }
}
