#include <iostream>
using namespace std;

class circular {
public:
  int *arr;
  int size;
  int front;
  int rear;

  circular(int size) {
    this->size = size;
    arr = new int[size];
    front = -1;
    rear = -1;
  }
  void push(int value) {
    if (rear >= size - 1) {
      cout << "q is full";
    } else {
      rear++;
      arr[rear] = value;
    }
  }
};

int main() {
  circular queue(5);
  queue.push(2);
  queue.push(4);
  queue.push(6);
  queue.push(7);
  queue.push(9);
}
