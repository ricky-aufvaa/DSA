#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *buildtree(Node *root) {
  cout << "Enter the data " << endl;
  int data;
  cin >> data;
  root = new Node(data);
  if (data == -1) {
    return NULL;
  }
  cout << "Enter the value for the left of " << data << endl;
  root->left = buildtree(root->left);
  cout << "Enter the value for the right of " << data << endl;
  root->right = buildtree(root->right);
  return root;
}

int main() {
  Node *root = NULL;
  root = buildtree(root);
}
