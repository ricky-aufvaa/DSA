#include <iostream>
using namespace std;

int solution(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> a[i];
    cout << "a[i]is   " << a[i] << endl;
  }

  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] > 10) {
      count++;
    }
  }
  cout << "count is" << count;
  return count;
}

int main() {
  // your code goes here
  int t;
  cin >> t;
  cout << "t is " << t << endl;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    solution(a, n);
  }
  return 0;
}
