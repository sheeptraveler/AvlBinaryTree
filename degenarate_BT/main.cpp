#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int key){
    data = key;
    left = NULL;
    right = NULL;
  }
};

Node* insert(Node* root, int data, int key){
  if (root == nullptr)
    root = new Node(data);
  else{
    // left skewed tree
    if (root->left != NULL)
      root = insert(root->left, data, 1);
    // right skewed tree
    else if (root->right != NULL)
      root = insert(root->right, data, 2);
    // leaf node
    else if (root->right == NULL && root->left == NULL){
      if(key == 1)
        root->left = insert(root->left, data, 1);
      else if ( key == 2)
        root->right = insert(root->right, data, 2);
    }
  }

  return root;
}

void printTree(Node* root){
  if (root != NULL) 
    cout << root->data << endl;
  else if (root->left != NULL)
      printTree(root->left);
  else if (root->right != NULL)
      printTree(root->right);
}

int main(){
  Node* lRoot = NULL;
  lRoot = insert(lRoot, 1, 1);
  lRoot = insert(lRoot, 2, 1);
  lRoot = insert(lRoot, 3, 1);

  printTree(lRoot);
}
