#include <iostream>
#include <math.h>
using namespace std;

int sqrt(int number) {
  int s = 0;
  int e = number - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    int midsq = pow(mid, 2);
    if (midsq == number) {
      return mid;
    } else if (number < midsq) {
      e = mid - 1;
    } else {
      ans = mid;
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  int x;
  cin >> x;
  cout << sqrt(x);
  return sqrt(x);
}
