// max and min in an array
#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;
int getmin(int a[], int size) {
  int mini = INT32_MAX;
  for (int i = 0; i < size; i++) {

    mini = min(mini, a[i]);
    //  if (a[i] < min) {
    //  min = a[i];
  }
  return mini;
}
int getmax(int a[], int size) {
  /*  for (int i = 0; i <= size; i++) {
      if (a[i] > a[i + 1] && a[i + 2] && a[i + 3]) {
        cout << a[i];
      } else if (a[i + 1] > a[i + 2] && a[i + 1 < a[i + 2] && a[i + 1] > a[i +
    ]])
    }*/ //noob method

  int max = INT32_MIN;
  for (int i = 0; i < size; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << getmin(a, n) << endl;
  cout << getmax(a, n) << endl;
}
