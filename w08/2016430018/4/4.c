#include "stack.h"
#include <stdio.h>
#include <ctype.h>

int main(void){
    stack stk;
    char str[100];
    int i, space = 0, cnt = 0;
    printf("Input string: ");
    fgets(str, 100, stdin);
    reset(&stk);
    for(i = 0; str[i] != '\0'; i++){
        if(isspace(str[i]) == 0)
        push(str[i], &stk);
    }
    printf("Output string: ");
    while(!empty(&stk))
    printf("%c", pop(&stk));
    printf("\n");
}