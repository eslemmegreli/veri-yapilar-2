#ifndef STACK_H
#define STACK_H

#include "Node.h"

typedef struct Stack {
  int size;
  Node* head;
} Stack;

Stack* createStack();
Node* pop(Stack* stack);
void push(Stack* stack, Node* node);

#endif