// find max no of occourance of a letter.
// sarabjot
#include <iostream>
using namespace std;

char getmax(string s) {
  int arr[26] = {0};
  int number = 0;
  for (int i = 0; i < s.length(); i++) {
    number = s[i] - 'a';
    arr[number]++;
  }
  int maxi = -1, ans = 0;
  for (int i = 0; i < 26; i++) {
    if (maxi < arr[i]) {
      ans = i;
      maxi = arr[i];
    }
  }
  char finalans = 'a' + maxi;
  return finalans;
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
  cout << getmax(a);
}
