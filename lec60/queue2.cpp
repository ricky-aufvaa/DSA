#include <iostream>
using namespace std;
class queue {
public:
  int front;
  int rear;
  int *arr;
  int size;

  queue(int size) {
    this->size = size;
    front = 0;
    rear = 0;
    arr = new int[size];
  }

  void print() {
    for (int i = 0; i <= size - 1; i++) {
      cout << arr[i] << "  ";
    }
  }
  void push(int data) {
    if (rear <= size - 1) {

      arr[rear] = data;
      rear++;
    } else {
      cout << "no space left" << endl;
    }
  }
  void pop() {
    if (isEmpty()) {
      cout << "queue is already empty" << endl;
    } else {
      arr[front] = -1;
      front++;
    }
  }
  bool isEmpty() {
    if (rear == front) {
      front = 0;
      rear = 0;
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  queue q(3);
  q.push(78);
  q.push(23);
  q.push(241);
  q.pop();
  q.print();
}
