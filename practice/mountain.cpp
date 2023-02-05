#include <iostream>
using namespace std;

void peak(int *arr, int s, int e) {
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid + 1] > arr[mid]) {
      s = mid + 1;
    } else if (arr[mid + 1] < arr[mid]) {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  cout << arr[e];
}

int main() {
  int a[] = {1, 2, 3, 13, 10, 4, 3};
  peak(a, 0, 6);
}
