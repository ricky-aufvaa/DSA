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
void insertnode(int data, Node *&head) {
  Node *node2 = new Node(data);
  // NUll hatao
  node2->next = head;
  head = node2;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    cout << temp->next << endl;
    temp = temp->next;
  }
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  // inserting a new node.
  // I'll give= it a data and the address of the node1.
  print(node1);
  cout << endl;
  cout << endl;
  insertnode(23, node1);
  print(node1);
  insertnode(15, node1);
  cout << endl;
  cout << endl;
  print(node1);
}
