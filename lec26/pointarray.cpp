#include <iostream>
using namespace std;
int main() {
  int arr[10] = {0, 2, 5, 6, 7};
  cout << arr << endl;
  cout << arr[0] << endl;
  cout << &arr << endl;
  cout << *arr << endl;
  cout << *(arr + 1) << endl; // value at 1st index
}
