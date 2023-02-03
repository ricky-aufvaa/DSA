#include <iostream>
using namespace std;

class Stack {
public:
  int *arr;
  int top1;
  int top2;
  int size;

  Stack(int size) {
    this->size = size;
    top1 = -1;
    top2 = size;
    arr = new int[size];
  }

  void push1(int element) {
    if ((top2 - top1) > 1) {
      top1++;
      arr[top1] = element;
    } else {
      cout << "stack overflow";
    }
  }

  void push2(int element) {
    if ((top2 - top1) > 1) {
      top2--;
      arr[top2] = element;
    } else {
      cout << "stack overflow";
    }
  }
};

int main() {
  Stack s(10);
  s.push1(23);
  s.push1(43);
  s.push1(219);
  s.push1(57);
  s.push1(75);
  s.push1(212);
  s.push2(213);
}
