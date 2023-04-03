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
    arr = new int[size];
    top = -1;
  }

  void push(int data) {
    if (size - top > 1) {
      top++;
      arr[top] = data;
    } else {
      cout << "stack overflow" << endl;
    }
  }

  void peek() {
    if (isEmpty()) {
      cout << "stack is empty" << endl;
    } else {
      cout << arr[top];
    }
  }

  bool isEmpty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }

  void pop() {
    if (isEmpty()) {
      cout << "stack underflow" << endl;
    } else {
      top--;
    }
  }
};

int main() {
  stack st(5);
  // st.push(43);
  // st.push(90);
  st.peek();
  st.pop();
  st.peek();
}
