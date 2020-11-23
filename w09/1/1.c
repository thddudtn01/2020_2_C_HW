//print unsigned integer as binary expression
#include <stdio.h>

void printU(unsigned char uc){
    int i;
    unsigned char mask = 0x80;
    printf("Binary expression:");
    for(i = 0; i < 8; i++){
        if(i % 4 == 0) printf(" ");
        if((uc & mask) != 0) printf("1");
        else printf("0");
        mask>>=1;
    }
    printf("\n");
}

int main(){
    unsigned char uc;
    printf("Input unsigned char: ");
    scanf("%hhu", &uc);
    printU(uc);
}