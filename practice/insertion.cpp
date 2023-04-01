#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  // constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};
void insertatHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void printnodes(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    cout << temp->next << endl;
    temp = temp->next;
  }
}

int main() {
  // dynamically creating an object
  Node *node1 = new Node(23);
  Node *head = node1;
  insertatHead(head, 67);
  insertatHead(head, 997);
  printnodes(head);
  // Node *node2 = new Node(45);
  // cout << (*node2).data << endl;
  // cout << (*node2).next << endl;
}
