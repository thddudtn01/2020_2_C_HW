#include <stdio.h>

union {
    char c[4];
    unsigned int i;
} Union;

void main(){
    printf("Enter unsigned int value: ");
    scanf("%u", &Union.i);
    printf("You entered: %s\n", Union.c);
}