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

Node *reverse(Node *&head, int k) {
  Node *curr = head;
  Node *prev = NULL;
  Node *forward = NULL;
  int count = 1;
  if (head == NULL) {
    return NULL;
  }
  while (curr != NULL && count <= k) {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    count++;
  }
  if (forward != NULL) {
    head->next = reverse(forward, k);
  }
  cout << prev;
  return prev;
}
int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  insertatHead(23, head);
  insertatHead(14, head);
  insertatHead(79, head);
  insertatHead(12, head);
  insertatHead(65, head);
  insertatHead(123, head);
  reverse(head, 3);
}
