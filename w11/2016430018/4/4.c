#include "queue.h"

int main(){
    queue q;
    data x;
    int i, removeIdx, tmp;
    initialize(&q);

    while(1){
        printf("Input positive integer (-1 to exit): ");
        scanf("%d", &x);
        if(x < 0) break;
        enqueue(x, &q);
    }

    printf("Input index of queue to remove: ");
    scanf("%d", &removeIdx);
    for(i = 0; i < removeIdx; i++)
    enqueue(dequeue(&q), &q);
    dequeue(&q);
    tmp = q.cnt - removeIdx;
    for(i = 0; i < tmp; i++) enqueue(dequeue(&q), &q);


    printf("you entered:");
    while(!empty(&q)){
        printf(" %d", dequeue(&q));
    }
    printf("\n");
}