#include "stack.h"

int main(){
    stack stk1, stk2, stk3;
    data x;
    int attachIdx, i;
    initialize(&stk1);
    initialize(&stk2);
    initialize(&stk3);

    while(1){
        printf("Input positive integer for stk1(-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        push(x, &stk1);
    }
    while(1){
        printf("Input positive integer for stk2(-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        push(x, &stk2);
    }

    printf("Input index of stk1 to attach stk2: ");
    scanf("%d", &attachIdx);

    int tmpCnt = stk1.cnt - attachIdx;
    for(i = 0; i < tmpCnt; i++) push(pop(&stk1), &stk3);
    while(!empty(&stk2)) push(pop(&stk2), &stk3);
    while(!empty(&stk3)) push(pop(&stk3), &stk1);

    printf("you entered:");
    while(!empty(&stk1)) push(pop(&stk1), &stk3);
    while(!empty(&stk3)) printf(" %d", pop(&stk3));
    printf("\n");
}