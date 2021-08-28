#include <stdlib.h>

#include "Node.h"
#include "Stack.h"

Stack* createStack()
{
  Stack* stack = malloc(sizeof(Stack));
  stack->size = 0;
  stack->head = NULL;
  return stack;
}

Node* pop(Stack* stack)
{
  if (stack->head)
  {
    stack->size--;

    Node* temp = stack->head;
    stack->head = temp->next;
    temp->next = NULL;
    return temp;
  }

  return NULL;
}

void push(Stack* stack, Node* node)
{
  stack->size++;

  if (stack->head == NULL)
  {
    stack->head = node;
  }
  else
  {
    node->next = stack->head;
    stack->head = node;
  }
}
