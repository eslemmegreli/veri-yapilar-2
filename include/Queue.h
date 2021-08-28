#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int front, rear;
    int size;
    int average;
    int* array;
} Queue;

Queue* createQueue();
void calculateAverage(Queue*);
void enqueue(Queue*,int);

#endif