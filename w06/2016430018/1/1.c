#include <stdio.h>

int main(){
    unsigned int x, step = 0x80000000;
    int b[32], i;
    printf("Enter an unsigned integer: ");
    scanf("%d", &x);
    printf("result:");
    for(i=0;i<32;i++){
        if(x & step) b[i] = 1;
        else b[i] = 0;
        step >>= 1;
    }
    
    for(i=0;i<32;i++){
        if(i%4 == 0) printf(" ");
        printf("%d", b[i]);
    }
    printf("\n");
}