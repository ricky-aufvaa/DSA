#include <iostream>
using namespace std;

void say(int n, string arr[10]) {
  // base case
  if (n == 0) {
    return;
  }
  int digit = n % 10;
  n = n / 10;

  // recursive relation
  say(n, arr);
  cout << arr[digit - 1];
}

int main() {
  int n;
  cin >> n;
  string arr[10] = {"one", "two",   "three", "four", "five",
                    "six", "seven", "eight", "nine", "ten"};
  say(n, arr);
}
