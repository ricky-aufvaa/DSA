#include <iostream>
using namespace std;

class nood {
public:
  int data;
  nood *next;
  nood(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void insertathead(nood *&head, int data) {
  nood *temp = new nood(data);
  temp->next = head;
  head = temp;
}

int countnodes(nood *&temp, int count) {
  if (temp == NULL) {
    return count;
  }
  return countnodes(temp->next, count + 1);
};

void traverse(nood *&temp, int count) {
  int n = 1;
  while (n < (count / 2) + 1) {
    temp = temp->next;
    n++;
  }
}

void insertatmiddle(nood *&head, int data) {
  nood *node2 = new nood(data);
  nood *temp = head;
  int count = countnodes(temp, 0);
  cout << endl << count << endl << endl;
  temp = head;
  traverse(temp, count);
  nood *forward = temp->next;
  temp->next = node2;
  node2->next = forward;
}

void printnodes(nood *head) {
  nood *temporary = head;
  while (temporary != NULL) {
    cout << temporary->data << endl;
    cout << temporary->next << endl;
    temporary = temporary->next;
  }
}

int main() {
  nood *node1 = new nood(23);
  nood *head = node1;
  insertathead(head, 89);
  insertathead(head, 219);
  insertathead(head, 2119);
  insertathead(head, 43);
  insertatmiddle(head, 67);
  printnodes(head);
}
