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

void mid(Node *&head) {
  Node *temp = head;
  int count = 1;
  while (temp->next != NULL) {
    // cout << temp->data << endl;
    temp = temp->next;
    count++;
  }
  int middle = ((count) / 2) + 1;
  count = 1;
  temp = head;
  while (count < middle) {
    temp = temp->next;
    count++;
  }
  cout << temp->data;
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
  cout << endl;
  cout << endl;
  insertnode(23, node1);
  insertnode(15, node1);
  insertnode(46, node1);
  insertnode(355, node1);
  print(node1);
  cout << endl;
  mid(node1);
}
