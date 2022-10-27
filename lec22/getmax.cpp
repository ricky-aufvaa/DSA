// find max no of occourance of a letter.
// sarabjot
#include <iostream>
using namespace std;

void getmax(string s) {
  int arr[26] = {0};
  cout << s[4] - 'a' << endl;
  cout << s[5] - 'a' << endl;
  cout << s[6] - 'a' << endl;
}

int getlength(char a[]) {
  int count = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char a[20];
  cin >> a;
  int length = getlength(a);
  cout << length << endl;
  getmax(a);
}
