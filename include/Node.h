#ifndef NODE_H
#define NODE_H

typedef struct Node Node;

struct Node {
  int value;
  Node* next;
};

Node* createNode(int value);

#endif
