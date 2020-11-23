//2017.9.1
#include <stdio.h>

void printU(unsigned int ui){
    int i;
    unsigned int mask = 0x80000000;
    printf("Binary expression :");
    for(i = 0; i < 32; i++){
        if(i % 4 == 0) printf(" ");
        if((ui & mask) != 0) printf("1");
        else printf("0");
        mask>>=1;
    }
    printf("\n");
}

void main(){
    unsigned int ret = 0x0;
    char tmp;
    printf("first character: ");
    scanf("%c", &tmp);
    ret |= tmp;
    printU(ret);
    printf("second character: ");
    scanf(" %c", &tmp);
    ret |= tmp<<8;
    printU(ret);
    printf("third character: ");
    scanf(" %c", &tmp);
    ret |= tmp<<16;
    printU(ret);
    printf("fourth character: ");
    scanf(" %c", &tmp);
    ret |= tmp<<24;
    printU(ret);
    printf("You entered: %d\n", ret);
}