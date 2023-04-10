#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    Node *left = NULL;
    Node *right = NULL;
  }
};
Node *buildtree(Node *root) {
  cout << "Enter data " << endl;
  int data;
  cin >> data;
  root = new Node(data);
  if (data == -1)
    return NULL;

  cout << "enter data for the left of " << data << endl;
  root->left = buildtree(root->left);
  cout << "enter data for the right of " << data << endl;
  root->right = buildtree(root->right);
  return root;
}

int main() {
  // binary tree creation
  Node *root = NULL;

  root = buildtree(root);
}
