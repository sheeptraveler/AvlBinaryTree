#ifndef AVL_BINARY_TREE
#define AVL_BINARY_TREE

struct Node{
  int data;
  Node* left, * right;

  Node(int key){
    data = key;
    left = nullptr;
    right = nullptr;
  }
  Node() = default;
};

void printInOrder(struct Node * node);
void printPreOrder(struct Node* node);
void printPostOrder(struct Node* node);
int treeHeight(struct Node* node);
int balancingFactor(struct Node* node);
struct Node* leftRotation(struct Node* node);
struct Node* rightRotation(struct Node* node);
struct Node* rightLeftRotation(struct Node* node);
struct Node* leftRightRotation(struct Node* node);
struct Node* insertion(struct Node* root, int key);

#endif
