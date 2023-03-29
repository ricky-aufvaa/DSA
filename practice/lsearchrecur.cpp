#include <iostream>
using namespace std;

bool lsearch(int *arr, int size, int key) {
  // base case
  if (size == 0)
    return false;
  // recursive relation
  if (key == arr[0])
    return true;
  else {
    return lsearch(arr + 1, size - 1, key);
  }
}

int main() {
  int arr[] = {150, 1, 2, 5, 7};
  int key = 5;
  if (lsearch(arr, 5, key) == true)
    cout << "true";
  else
    cout << "false";
}
