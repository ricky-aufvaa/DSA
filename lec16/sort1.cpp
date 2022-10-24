#include <iostream>
#include <type_traits>
using namespace std;
void sort(int arr[], int size) {
  int min = 0;
  for (int i = 0; i < size - 1; i++) {
    min = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        swap(arr[j], arr[min]);
      }
    }
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << "\t";
  }
}
int main() {
  int a[5] = {6, 2, 8, 4, 10};
  sort(a, 5);
}
