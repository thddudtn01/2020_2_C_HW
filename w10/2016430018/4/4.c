// note 2020/w09/3.c

#include <stdio.h>

unsigned char shiftU(unsigned char uc, int dir, int size){
    int i;
    int tmp;
    for(i = 0; i < size; i++){
        tmp = 0;
        if(dir == 0){
            if((uc & 0x80) != 0) tmp = 0x01;
            uc = uc<<1;
        }
        else{
            if((uc & 0x01) != 0) tmp = 0x80;
            uc = uc>>1;
        }
        uc |= tmp;
    }
    return uc;
}

void printU(unsigned char uc){
    int i;
    unsigned char mask = 0x80;
    printf("Binary expression :");
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
#ifdef DEBUG
    printU(uc);
#endif
    while(1){
        printf("Input direction and shift size: ");
        scanf("%d %d", &dir, &size);
        if(dir != 0 && dir != 1) break;
        uc = shiftU(uc, dir, size);
#ifdef DEBUG
        printU(uc);
#endif
    }
    printU(uc);
}