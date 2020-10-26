#include <stdio.h>
#include <stdlib.h>

int main(){
    float arr[4], R[2], D, x, y;
    int i, seed;

    printf("Enter a random seed: ");
    scanf("%d", &seed);
    srand(seed);
    for(i=0;i<4;i++){
        arr[i] = rand()%9+1;
    }
    for(i=0;i<2;i++){
        R[i] = rand()%9+1;
    }
    
    D = arr[0] * arr[3] - arr[2] * arr[1];
    if(D == 0){
        printf("Determinant is zero.");
        return 0;
    }

    x = (arr[3] * R[0] - arr[1] * R[1])/D;
    y = (-arr[2] * R[0] + arr[0] * R[1])/D;

    for(i=0;i<2;i++){
        printf("%d x + %d y = %d\n", (int)arr[2*i],(int)arr[2*i+1], (int)R[i]);
    }
    printf("x = %.3f, y = %.3f\n", x, y);
    return 0;
}