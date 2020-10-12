#include <stdio.h>

int pibo(int a){
    if(a > 2)
    return pibo(a-2) + pibo(a-1);
    else return 1;
}

int main(void){
    int x;
    int a1 = 0, a2 = 0;

    printf("Enter a integer: ");
    scanf("%d", &x);

    printf("number at %d is %d.\n", x, pibo(x));
}