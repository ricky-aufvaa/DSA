#include <iostream>
using namespace std;

void sqrt(int number) {
  int arr[number];
  for (int i = 0; i < number; i++) {
    arr[i] = 1 + i;
    cout << arr[i] << "  ";
  }
  int s = 0, e = number;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (arr[mid] * arr[mid] == number) {
      cout << endl << mid + 1 << endl;
      return;
    }
    if (arr[mid] * arr[mid] < number) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
}

int main() {
  int n;
  cin >> n;
  sqrt(n);
}
