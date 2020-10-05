#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int sum = 0;
    int x = 1, n;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    while(sum <= 5000 && x <= n){
        sum += 4*x*x;
        x++;
    }
    printf("\"sum\" is %d\n", sum);
}