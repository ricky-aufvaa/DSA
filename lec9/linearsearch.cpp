#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Which number you wanna search for?" << endl;
  int key;
  cin >> key;

  int answer = search(a, n, key);
  if (answer == 1) {
    cout << "it's present";
  } else {
    cout << "not present";
  }
}
