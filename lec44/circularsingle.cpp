#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void insertNode(Node *&tail, int element, int data) {
  if (tail == NULL) {
    Node *node1 = new Node(data);
    node1->next = node1;
    tail = node1;
  } else {
    Node *temp = tail;
    while (temp->data != element) {
      temp = temp->next;
    }
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
  }
}

void print(Node *tail) {
  Node *temp = tail;
  if (tail == NULL) {
    cout << "the list is empty" << endl;
    return;
  }
  do {
    cout << tail->data << endl;
    cout << tail->next << endl;
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

int main() {
  Node *tail = NULL;
  insertNode(tail, 23, 45);
  print(tail);
  insertNode(tail, 45, 56);
  print(tail);
  insertNode(tail, 45, 236);
  print(tail);
}
