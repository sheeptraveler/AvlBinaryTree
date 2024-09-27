#ifndef NODE 
#define NODE

struct Node{
  int data;
  Node* left, * right;

  Node(int key){
    data = key;
    left = nullptr;
    right = nullptr;
  }
};

#endif
