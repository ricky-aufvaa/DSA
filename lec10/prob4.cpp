// numbers in array is from 1 to n-1; and one number is repeated.
// a[5]={1,2,3,4,2}. find the repeated number
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[100];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sum = 0;
  int ans = (n - 1) * (n) / 2;
  for (int i = 0; i < 5; i++) {
    sum = sum + a[i];
  }
  cout << sum - ans;
  return 0;
}
