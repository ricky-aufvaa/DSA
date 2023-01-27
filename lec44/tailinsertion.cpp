#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  // parametarised constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};
void insertnodeatHead(int data, Node *&head) {
  Node *node2 = new Node(data);
  // NUll hatao
  node2->next = head;
  head = node2;
}

void insertnodeatTail(int data, Node *&tail) {
  Node *temp = new Node(data);
  // NUll hatao
  tail->next = temp;
  tail = tail->next;
}

void print(Node *&tail) {
  Node *temp = tail;
  while (temp != NULL) {
    cout << temp->data << endl;
    // cout << temp->next << endl;
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  // inserting a new node.
  // I'll give= it a data and the address of the node1.
  print(tail);
  cout << endl;
  cout << endl;
  insertnodeatTail(23, tail);
  print(tail);
}
