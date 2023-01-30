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

void insertatHead(int data, Node *&head) {
  Node *node2 = new Node(data);
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
  cout << endl;
}

Node *reverse(Node *&head) {
  Node *curr = head;
  Node *prev = NULL;
  Node *forward = NULL;
  while (curr != NULL) {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  head = prev;
  return prev;
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  insertatHead(23, head);
  insertatHead(45, head);
  insertatHead(63, head);
  print(head);
  reverse(head);
  print(head);
}
