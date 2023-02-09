#include <iostream>
#include <type_traits>
using namespace std;

class Stack {
public:
  int *arr;
  int size;
  int top;

  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element) {
    if (size - top > 1) {
      top++;
      arr[top] = element;
    } else {
      cout << "stack overflow";
    }
  }
  void pop() {
    if (top >= 1) {
      top--;
    } else {
      cout << "stack underflow";
    }
  }
  bool isEmpty() {
    if (top == 0) {
      cout << "empty";
      return true;
    } else {
      return false;
    }
  }
  int peek() {
    if (top >= 0) {
      return arr[top];
    } else {
      cout << "stack is empty";
      return -1;
    }
  }
};

int main() {
  Stack s(5);
  s.push(23);
  s.push(53);
  s.push(67);
  s.push(76);
  s.push(43);
  s.pop();
  cout << s.peek();
}
