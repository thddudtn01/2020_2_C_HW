#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    float y, z;
    printf("Enter a integer number : \n");
    scanf("%d", &x);
    x= abs(x);
    printf("Enter a float number : \n");
    scanf("%f", &y);
    y = fabs(y);
    z = x + y;
    printf("%d + %.1f = %.1f\n", x,y,z);
    z = x - y;
    printf("%d - %.1f = %.1f\n", x,y,z);
    z = x * y;
    printf("%d * %.1f = %.1f\n", x,y,z);
    z = x / y;
    printf("%d / %.1f = %.1f\n", x,y,z);
}