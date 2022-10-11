#include <iostream>
using namespace std;

bool isprime(int n) {
  for (int a = 2; a <= (n / 2); a++) {
    if (n % a == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int n;
  cin >> n;
  if (isprime(n) == 1) {
    cout << "prime";
  } else {
    cout << "composite";
  }
}
