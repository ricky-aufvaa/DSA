// find unique element in an array. {1,1,2,3,4,4} output - 2,3
#include <iostream>
using namespace std;

void unique(int a[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (a[j] != a[i]) {
        count = 1;
      }
    }
  }
}

int main() {
  int a[4] = {1, 2, 2, 4};
  unique(a, 4);
}
