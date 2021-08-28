#include <stdlib.h>
#include <stdio.h>

#include "Queue.h"
#include "Node.h"
#include "Stack.h"

int main()
{
  char input[12];

  Queue* queue = createQueue();
  Stack* stack = createStack();

  for (int i = 0; i < queue->size; i++)
  {
    scanf("%s", input);
    enqueue(queue, atoi(input));
  }

  calculateAverage(queue);

  for (int i = 0; i < queue->size; i++)
  {
    int number = queue->array[i];

    if (number >= queue->average)
    {
      push(stack, createNode(number));
    }
  }

  int resultSize = stack->size;
  int *result = malloc(resultSize*sizeof(int));

  int count = 0;
  Node* node = pop(stack);

  while (node)
  {
    result[count++] = node->value;
    node = pop(stack);
  }

  for (int i = 0; i < resultSize; i++)
  {
    printf("n in array: %d\n", result[i]);
  }

  free(queue);
  free(node);
  free(stack);
  free(result);
  
};
