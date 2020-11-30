#include "stack.h"

int main(){
    stack stk1, stk2, stk3;
    data x;
    int attachIdx, i;
    //TODO

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

    printf("Input index of stk1 to attach stk2: ");
    scanf("%d", &attachIdx);

    // After some stk1 is pushed to stk3, all stk2 is pushed.
    // Push stk3 back to stk1.
    //TODO

    printf("you entered:");
    //TODO
    printf("\n");
}

/*
0 1 4 5    , 2 3 ,
0 1        , 2 3 , 5 4
0 1        ,     , 5 4 3 2
0 1 2 3 4 5,     ,
           ,     , 5 4 3 2 1 0
*/