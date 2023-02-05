// leftmost and rightmost occourance
//[1,2,2,3,3,3]    - key =2;left =1. right = 2
#include <iostream>
using namespace std;

void leftoccur(int *arr, int s, int e, int key) {
  int mid = s + ((e - s) / 2);
  while (s < e) {
    if (arr[mid] == key && arr[mid - 1] < key) {
      cout << mid;
      return;
    } else if (arr[mid - 1] >= key) {
      e = mid - 1;
    } else if (arr[mid] < key) {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  cout << s;
}

int main() {
  int a[] = {1, 1, 2, 3, 3, 3, 3, 4, 4};
  leftoccur(a, 0, 8, 4);
}
