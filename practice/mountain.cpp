#include <iostream>
using namespace std;

int peak(int *arr, int s, int e) {
  int mid = (s + e) / 2;
  while (s < e) {
    if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    } else if (arr[mid] < arr[mid - 1]) {
      e = mid - 1;
    } else {
      return arr[mid];
    }
    mid = (s + e) / 2;
  }
  return arr[s];
}

int main() {
  int a[] = {1, 5, 8, 89, 99, 3, 2, 1, 0};
  int ans = peak(a, 0, 8);
  cout << ans << endl;
}
