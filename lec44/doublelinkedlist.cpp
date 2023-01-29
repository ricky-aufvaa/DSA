#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int d) {
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insertatHead(int d, Node *&head) {
  Node *node2 = new Node(d);
  node2->next = head;
  head->prev = node2;
  head = node2;
}

void inseratTail(int d, Node *&tail) {
  Node *node3 = new Node(d);
  tail->next = node3;
  node3->prev = tail;
  tail = node3;
}

void inseratMiddle(int d, int position, Node *&head, Node *&tail) {
  Node *temp = head;
  int count = 1;
  while (count < position - 1) {
    temp = temp->next;
    count++;
  }

  Node *node4 = new Node(d);
  node4->next = temp->next;
  temp->next = node4;
  node4->prev = temp;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    cout << temp->prev << endl;
    cout << temp->next << endl;
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;

  print(head);
  insertatHead(23, head);
  print(head);
  inseratTail(34, tail);
  inseratTail(56, tail);
  inseratTail(699, tail);
  print(head);
  // 23,10,34,56,699
  inseratMiddle(46, 3, head, tail);
  // 23,10,46,34,56,699
  print(head);
}
