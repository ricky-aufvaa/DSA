// abcba
#include <iostream>
using namespace std;

void check(char a[], int size) {

  int s = 0;
  int e = size - 1;
  int count = 1;
  while (s < e) {
    if (a[s] != a[e]) {
      s++;
      e--;
      count = 0;
      cout << count;
    } else {
      break;
    }
  }
  cout << count << endl;
  if (count == 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

int getlength(char a[]) {
  int count = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  char a[n];
  cin >> a;
  int len = getlength(a);
  cout << len;
  check(a, len);
}
