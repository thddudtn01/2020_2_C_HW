#include <stdio.h>
#include <stdlib.h>
#define BOUNDARY 9

int arr[9][9] = {0};
int isFull(){
    int i, j, ret = 0;
    for(i=0;i<BOUNDARY;i++){
        for(j=0;j<BOUNDARY;j++) ret += arr[i][j];
    }
    if(ret == 81) return 1;
    else return 0;
}

int main(){
    int seed;
    int x = 4, y = 4;
    int _x, _y;
    int randNum, idx = 0;

    printf("Enter a random seed integer: ");
    scanf("%d", &seed);
    srand(seed);

    arr[x][y] = 1;
    while(!isFull()){
        if(idx > 100000) break;
        _x = x;
        _y = y;
        randNum = rand() % 8;
        if(randNum == 0){
            y++;
        }
        if(randNum == 1){
            x++;y++;
        }
        if(randNum == 2){
            x++;
        }
        if(randNum == 3){
            x++;y--;
        }
        if(randNum == 4){
            y--;
        }
        if(randNum == 5){
            x--;y--;
        }
        if(randNum == 6){
            x--;
        }
        if(randNum == 7){
            x--;y++;
        }
        idx++;
        if(x >= BOUNDARY || x < 0 || y >= BOUNDARY || y < 0){
            x = _x;
            y = _y;
        }
        arr[x][y] = 1;
    }
    printf("total movement: %d\n", idx);
}