#include <iostream>
using namespace std;
int main() {
  int arr[10] = {1, 2, 3, 4};
  char ch[6] = "abcde";
  int *p = &arr[0];
  cout << p << endl;
  char *q = &ch[0];
  cout << q << endl;
  cout << &q << endl; // address of the pointer pointing to the first element of
                      // char array.
  cout << *(q + 2) << endl;
  cout << &ch[2] << endl;

  // what if there's no null char
  char temp = 'a';
  char *c = &temp;
  cout << c << endl;
}
