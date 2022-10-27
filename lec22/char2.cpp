#include <iostream>
using namespace std;
void getLen(char a[], int size) {
  int count = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    count++;
  }
  cout << count;
}
int main() {
  char name[20];
  cin >> name;
  getLen(name, 20);
}
