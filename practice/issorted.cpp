#include <iostream>
using namespace std;

bool issorted(int *arr, int size) {
  // base case
  if (size == 0 || size == 1)
    return true;
  // recursive relation
  if (arr[0] > arr[1])
    return false;
  else
    return issorted(arr + 1, size - 1);
}

int main() {
  int arr[] = {4, 5, 6, 7, 13};
  if (issorted(arr, 5))
    cout << "true" << endl;
  else
    cout << "false";
}
