#include <stdlib.h>

#include "Node.h"

Node* createNode(int value)
{
  Node* node = malloc(sizeof(Node));
  node->next = NULL;
  node->value = value;
  return node;
}
