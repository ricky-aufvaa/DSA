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

void mid(Node *&head, Node *&curr, Node *&prev) {
  // base case
  if (head->next == NULL) {
    cout << head->data;
  }
  if (curr == NULL) {
    cout << prev->data;
    return;
  }
  mid(prev, prev->next, head->next);

  // while (curr->next != NULL) {
  //   curr = curr->next->next;
  //   prev = prev->next;
  // }
  // cout << prev->data << endl;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << "  ";
    // cout << temp->next << endl;
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
  insertnode(55, node1);
  insertnode(21, node1);
  insertnode(245, node1);
  insertnode(37, node1);
  insertnode(374, node1);
  insertnode(12, node1);
  print(node1);
  cout << endl;
  Node *curr = head;
  Node *prev = head;
  mid(node1, curr, prev);
}
