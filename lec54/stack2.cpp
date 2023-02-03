// implementing stack  using array
#include <iostream>
using namespace std;
class Stack {
public:
  int top;
  int *arr; // or *arr
  int size;
  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int element) {
    if (size == top) {
      cout << "stack overflow";
    } else {
      top++;
      arr[top] = element;
    }
  }
  void pop() {
    if (top >= 0) {
      top--;
    } else {
      cout << "stack underflow" << endl;
    }
  }
  void peek() {
    if (top >= 0) {
      cout << arr[top];
    } else {
      cout << "stack empty hai";
    }
  }
  bool isEmpty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Stack s1(5);
  // s1.push(10);
  s1.push(780);
  s1.push(50);
  s1.pop();
  s1.pop();
  s1.pop();
  s1.pop();
  s1.peek();
}
