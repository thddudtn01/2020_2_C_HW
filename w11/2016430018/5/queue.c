#include "queue.h"

void initialize(queue *q){
    q->cnt = 0;
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(data d, queue *q){
    elem *p = malloc(sizeof(elem));
    p->d = d;
    p->next = NULL;
    if(q->cnt != 0) q->rear->next = p;
    q->rear = p;
    if(q->cnt == 0) q->front = p;
    q->cnt++;
}
data dequeue(queue *q){
    data d;
    elem *p;
    d = q->front->d;
    p = q->front;
    q->front = q->front->next;
    q->cnt--;
    free(p);
    return d;
}
data front(const queue *q){
    data d;
    d = q->front->d;
    return d;
}
boolean empty(const queue *q){
    return ((boolean) (q->cnt == EMPTY));
}
boolean full(const queue *q){
    return ((boolean) (q->cnt == FULL));
}
