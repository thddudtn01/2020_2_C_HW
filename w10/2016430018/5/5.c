// note 2020/w05/3.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
int main(){
    int sum = 0;
    int x = 1, n;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    while(x <= n){
        sum += 4*x*x;
        x++;
        printf("now sum = %d\n", sum);
        assert(sum <= 5000);
    }
    printf("\"sum\" is %d\n", sum);
}
