#include <stdio.h>
#include <stdlib.h>
#define BOUNDARY 9
#define MAXBUG 9
#define BUG_IN_ROW 3
#define BUG_IN_COLUMN 3
#define MAXCOUNT 100000

struct {
    int xPos;
    int yPos;
} bugPos[9];

int isFull(int** arr){
    int i, j, ret = 0;
    for(i=0;i<BOUNDARY;i++){
        for(j=0;j<BOUNDARY;j++) ret += arr[i][j];
    }
    if(ret == BOUNDARY * BOUNDARY) return 1;
    else return 0;
}

int bugMove(int bugId, int ranNum){
    if(ranNum == 0){
        bugPos[bugId].yPos++;
    }
    if(ranNum == 1){
        bugPos[bugId].xPos++;
        bugPos[bugId].yPos++;
    }
    if(ranNum == 2){
        bugPos[bugId].xPos++;
    }
    if(ranNum == 3){
        bugPos[bugId].xPos++;
        bugPos[bugId].yPos--;
    }
    if(ranNum == 4){
        bugPos[bugId].yPos--;
    }
    if(ranNum == 5){
        bugPos[bugId].xPos--;
        bugPos[bugId].yPos--;
    }
    if(ranNum == 6){
        bugPos[bugId].xPos--;
    }
    if(ranNum == 7){
        bugPos[bugId].xPos--;
        bugPos[bugId].yPos++;
    }
}

void checkBoundary(int bugId, int preX, int preY){
    if(bugPos[bugId].xPos >= BOUNDARY || bugPos[bugId].xPos < 0
    || bugPos[bugId].yPos >= BOUNDARY || bugPos[bugId].yPos < 0){
        bugPos[bugId].xPos = preX;
        bugPos[bugId].yPos = preY;
    }
}

int main(){
    int seed;
    int preX, preY;
    int ranNum, idx = 0;
    int **arr;
    int i, j;

    printf("Enter a random seed integer: ");
    scanf("%d", &seed);
    srand(seed);

    arr = (int**)calloc(BOUNDARY, sizeof(int*));
    for(i = 0; i < BOUNDARY; i++){
        arr[i] = (int*)calloc(BOUNDARY, sizeof(int));
    }

    for(i = 0; i < BUG_IN_ROW; i++){
        for(j = 0; j < BUG_IN_COLUMN; j++){
            bugPos[3*j+i].xPos = 3*i+1;
            bugPos[3*j+i].yPos = 3*j+1;
            arr[3*i+1][3*j+1] = 1;
        }
    }

    while(!isFull(arr)){
        if(idx > MAXCOUNT) break;
        for(i = 0; i < MAXBUG; i++){
//TODO
            preX = bugPos[i].xPos;
            preY = bugPos[i].yPos;
            ranNum = rand() % 8;
            bugMove(i, ranNum);
            checkBoundary(i, preX, preY);
            arr[bugPos[i].xPos][bugPos[i].yPos] = 1;
        }
        idx++;
    }
    printf("total movement: %d\n", idx);
}