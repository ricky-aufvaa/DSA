#include <iostream>
#include <type_traits>
using namespace std;
void reverse(int arr[], int size, int m) {
  int s = m + 1;
  int e = size - 1;
  for (int i = 0; (s + i) < (e - i); i++) {
    swap(arr[s + i], arr[e - i]);
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
}
int main() {
  int a[6] = {1, 2, 3, 4, 5, 6};
  int key;
  cin >> key;
  reverse(a, 6, key);
}
