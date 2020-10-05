#include <stdio.h>

void main(){
    int x;
    int max, min;
    printf("input positive integer(negative integer, if you want to exit): ");
    scanf("%d", &x);
    max = x;
    min = x;
    if(x < 0){
        printf("first input is negative integer.\n");
        return;
    };
    while(1){
        printf("input positive integer(negative integer, if you want to exit): ");
        scanf("%d", &x);
        if(x < 0) break;
        if(max < x) max = x;
        if(min > x) min = x;
    }
    printf("result: maximum = %d, minimum = %d\n", max, min);
}