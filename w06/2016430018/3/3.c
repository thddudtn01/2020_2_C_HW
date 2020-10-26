#include <stdio.h>

int main(){
    int a;
    int *b = &a;
    a = 10;

    printf("a: %d\n", a);
    printf("*b: %d\n", *b);
    printf("&a: %d\n", &a);
    printf("b: %d\n", b);
}