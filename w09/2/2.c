#include <stdio.h>

unsigned char shiftU(unsigned char uc, int dir, int size){
    unsigned char ret;
    if(dir == 0) ret = uc<<size;
    else if(dir == 1) ret = uc>>size;
    return ret;
}

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
    int dir, size;
    printf("Input unsigned char: ");
    scanf("%hhu", &uc);
    printU(uc);
    while(1){
        printf("Input direction and shift size: ");
        scanf("%d %d", &dir, &size);
        if(dir != 0 && dir != 1) break;
        uc = shiftU(uc, dir, size);
        printU(uc);
    }
}