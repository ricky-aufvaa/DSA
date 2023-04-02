// array implementation of stack
#include <iostream>
using namespace std;

class stack {
public:
  int size;
  int top;
  int *arr;

  stack(int size) {
    this->size = size;
    top = -1;
    arr = new int[size];
  }

  void push(int element) {
    if (isEmpty()) {
      top++;
      arr[top] = element;
    } else {
      cout << "stack overflow";
    }
  }

  bool isEmpty() {
    if (top == -1) {
      return true;
    } else
      return false;
  }

  void pop() {
    if (isEmpty()) {
      cout << "stack underflow";
    } else {
      top--;
    }
  }

  void peek() {
    if (isEmpty()) {
      cout << "stack is empty";
    } else {
      cout << arr[top];
    }
  }
};

int main() {
  stack st1(5);
  st1.push(23);
  st1.push(466);
  st1.peek();
}
