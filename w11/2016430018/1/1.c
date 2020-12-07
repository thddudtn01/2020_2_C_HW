#include "stack.h"

int main(){
    stack stk1, stk2;
    data x;
    initialize(&stk1);
    initialize(&stk2);

    while(1){
        printf("Input positive integer (-1 to exit): ");
        scanf("%d", &x);
        if(x == -1) break;
        push(x, &stk1);
    }

    printf("you entered:");
    while(!empty(&stk1)) push(pop(&stk1), &stk2);
    while(!empty(&stk2)) printf(" %d", pop(&stk2));
    printf("\n");
}