// swap alternate elemets in an array. input = {1,2,3,4}. output - {2,1,4,3}
#include <iostream>
using namespace std;

void printarray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i];
  }
}

void solution(int a[], int n) {
  int swap = 0;
  if (n % 2 == 0) {
    for (int i = 0; i < n; i = i + 2) {
      swap = a[i];
      a[i] = a[i + 1];
      a[i + 1] = swap;
    }
  } else {
    for (int i = 0; i < n - 1; i = i + 2) {
      swap = a[i];
      a[i] = a[i + 1];
      a[i + 1] = swap;
    }
  }
}
int main() {
  //  int t;
  // cin >> t;
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  solution(a, n);
  printarray(a, n);
  // while (t--) {

  // solution(a, n);
  //  printarray(a, n);
  //  }
}
