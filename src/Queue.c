#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

Queue* createQueue()
{
    Queue* q = malloc(sizeof(Queue));
    q->size = 10;
    q->array = malloc(q->size * sizeof(int));
    q->rear = q->size - 1;

    return q;
}

void enqueue(Queue* q, int data)
{
    q->rear = (q->rear + 1) % q->size;
    q->array[q->rear] = data;
}

void calculateAverage(Queue* q)
{
    int sum = 0;

    for (int i = 0 ; i < q->size ; i++ )
    {
        sum += q->array[i];
    }

    q->average = sum/10;
}