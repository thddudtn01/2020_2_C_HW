#include "stack.h"

int main(){
    stack stk1, stk2;
    data x;
    initialize(&stk1);
    initialize(&stk2);

    while(1){
        printf("Input positive integer (-1 to exit): ");
        scanf("%d %d", &x.x, &x.y);
        if(x.x < 0) break;
        push(x, &stk1);
    }

    printf("you entered:\n");
    while(!empty(&stk1)) push(pop(&stk1), &stk2);

    while(!empty(&stk2)){
        x = pop(&stk2);
        printf("(%d, %d)\n", x.x, x.y);
    }
}