#include <iostream>
#include <type_traits>
using namespace std;
void reverse(char a[], int size) {
  int s = 0;
  int e = size - 1;
  while (s < e) {
    swap(a[s++], a[e--]);
  }
  cout << a;
}
int getLength(char a[]) {
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

  int length = getLength(a);
  reverse(a, length);
}
