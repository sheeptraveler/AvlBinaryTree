#ifndef AVL_BINARY_TREE
#define AVL_BINARY_TREE

#include "Node.cpp"
#include <iostream>
using namespace std;

void printInOrder(struct Node * node){
  if (node == nullptr)
    return;
  printInOrder(node->left);
  cout << node->data << " ";
  printInOrder(node->right);
}

void printPreOrder(struct Node* node){
  if (node == nullptr)
    return;
  cout << node->data << " ";
  printPreOrder(node->left);
  printPreOrder(node->right);
}

void printPostOrder(struct Node* node){
  if (node == nullptr)
    return;
  printPostOrder(node->left);
  printPostOrder(node->right);
  cout << node->data << " ";
}

int treeHeight(struct Node* node){
  if (node == nullptr)
    return 0;
  int leftHeight = treeHeight(node->left);
  int rightHeight = treeHeight(node->right);

  int maxHeight = (leftHeight > rightHeight) ? leftHeight:rightHeight;
  return (maxHeight + 1);
}

int balancingFactor(struct Node* node){
  int leftHeight;
  int rightHeight;

  if (node == nullptr)
    return 0;
  leftHeight = treeHeight(node);
  rightHeight = treeHeight(node);

  return rightHeight - leftHeight;
}

struct Node* leftRotation(struct Node* node){
  struct Node* newRoot = node->right;
  node->right = newRoot->left;
  newRoot->left = node;

  return newRoot;
}

struct Node* rightRotation(struct Node* node){
  struct Node* newRoot = node->left;
  node->left = newRoot->right;
  newRoot->right = node;

  return newRoot;
}

#endif
