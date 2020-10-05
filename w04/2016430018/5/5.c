#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i;
    double x, y;
    int in = 0, out = 0;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    srand(1);
    for(i=0;i<n;i++){
        x = (rand()%1000)/1000.0;
        y = (rand()%1000)/1000.0;
        if(x*x + y*y < 1) in++;
        else out++;
    }
    printf("pi is %.3f\n", 4.0*in/n);
}