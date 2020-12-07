#include "queue.h"

int main(){
    queue q1, q2;
    data x;
    initialize(&q1);
    initialize(&q2);
    int i, maxCnt = 0, tmp;

    while(1){
        printf("Input positive integer for q1 (-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        enqueue(x, &q1);
        maxCnt++;
    }
    while(1){
        printf("Input positive integer for q2 (-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        enqueue(x, &q2);
        maxCnt++;
    }

    while(!empty(&q1)) enqueue(dequeue(&q1), &q2);

    for(i = 0; i < maxCnt; i++){
        while((tmp = dequeue(&q2)) != i) enqueue(tmp, &q2);
        enqueue(tmp, &q1);
    }

    printf("you entered:");
    while(!empty(&q1)) printf(" %d", dequeue(&q1));
    printf("\n");
}