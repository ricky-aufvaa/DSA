#include <iostream>
using namespace std;

int getsum(int *arr, int size) {
  // base case
  if (size == 0)
    return 0;
  if (size == 1)
    return arr[0];
  int sum = arr[0] + arr[1]; // smaller problem
  int bigproblem = sum + getsum(arr + 2, size - 2);
  return bigproblem;
}

int main() {
  int arr[4] = {3, 7, 2, 5};
  int sum = getsum(arr, 4);
  cout << sum << endl;
}
