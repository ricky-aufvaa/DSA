#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int d) {
    this->data = d;
    this->next = NULL;
  }

  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "memory is free for the node with value" << value << endl;
  }
};

void insertatHead(int d, Node *&head) {
  Node *node2 = new Node(d);
  node2->next = head;
  head = node2;
}

void insertatTail(int d, Node *&tail) {
  Node *node3 = new Node(d);
  tail->next = node3;
  tail = node3;
}

void insertatMiddle(int d, int position, Node *&head, Node *&tail) {
  // to reach the position, we can start from head or tail.
  Node *temp = head;
  int count = 1;
  if (position == 1) {
    insertatHead(d, head);
  }

  while (count < position - 1) {
    temp = (*temp).next; //*temp.next is same as temp->next
    count++;
  }
  if (temp->next == NULL) {
    insertatTail(d, tail);
    return;
  }
  Node *node4 = new Node(d);
  node4->next = temp->next;
  temp->next = node4;
}

void deleteNode(int position, Node *&head) {
  Node *prev = NULL;
  Node *current = head;
  int count = 1;
  while (count < position) {
    prev = current;
    current = current->next;
    count++;
  }
  prev->next = current->next;
  current->next = NULL;
  delete current;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    cout << temp->next << endl;
    temp = temp->next;
  }
  cout << endl << endl;
}

int main() {
  Node *node1 = new Node(12);
  Node *head = node1;
  Node *tail = node1;
  print(head);

  insertatHead(23, head);
  insertatHead(78, head);
  print(head);
  insertatTail(55, tail);
  print(head);
  insertatMiddle(89, 5, head, tail); // inserting at tail
  print(head);
  insertatTail(34, tail);
  print(head);
  deleteNode(3, head); // delete the node at position 3.
  print(head);
}
