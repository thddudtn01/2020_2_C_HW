#include <stdio.h>
#include <stdlib.h>

int main(){
    int seed;
    int x = 0, y = 0;
    int idx = 0;
    int randNum;

    printf("Enter a random seed integer: ");
    scanf("%d", &seed);
    srand(seed);

    while(!(abs(x) > 10 | abs(y) > 10)){
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
    }
    printf("total movement: %d\n", idx);
}