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
        //TODO
    }
    while(1){
        printf("Input positive integer for stk2(-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        //TODO
    }

    printf("Input index of skt1 to attach skt2: ");
    scanf("%d", &attachIdx);

    int tmpCnt = stk1.cnt - attachIdx;
    // After some stk1 is pushed to stk3, all stk2 is pushed.
    // Push stk3 back to stk1.
    for(i = 0; i < tmpCnt; i++) //TODO
    while(!empty(&stk2)) //TODO
    while(!empty(&stk3)) //TODO

    printf("you entered:");
    //TODO hint : w10/1.c
    printf("\n");
}