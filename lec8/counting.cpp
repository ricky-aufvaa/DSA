#include <iostream>
using namespace std;

void counting(int a) {
  for (int b = 0; b <= a; b++) {
    cout << b << " ";
  }
}

int main() {
  int i;
  cin >> i;
  counting(i);
}
