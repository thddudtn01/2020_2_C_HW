#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0
#define FULL 10000
typedef int data;
typedef enum {false, true} boolean;

struct elem {
    data d;
    struct elem *next;
};
typedef struct elem elem;

struct queue {
    int cnt;
    elem *front;
    elem *rear;
};
typedef struct queue queue;

void initialize(queue *q);
void enqueue(data d, queue *q);
data dequeue(queue *q);
data front(const queue *q);
boolean empty(const queue *q);
boolean full(const queue *q);
