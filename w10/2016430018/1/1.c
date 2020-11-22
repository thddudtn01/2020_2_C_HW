#include <stdio.h>

#define SQ1(x) x*x
#define SQ2(x) (x)*(x)

int main(){
    int x;
    printf("Input integer: ");
    scanf("%d", &x);
    printf("SQ1(x) = %d\n", SQ1(x));
    printf("SQ2(x) = %d\n", SQ2(x));
    printf("SQ1(x+1) = %d\n", SQ1(x+1));
    printf("SQ2(x+1) = %d\n", SQ2(x+1));
}