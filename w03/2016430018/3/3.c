#include <stdio.h>

int main(){
    double x0, x1, h0, h1;
    printf("This program calculates of the height of a pyramid.\n");
    printf("Input the distance from an observer to the shadow of a stick (x_0):\n");
    scanf("%lf", &x0);
    printf("Input the distance from an observer to the shadow of the pyramid (x_1):\n");
    scanf("%lf", &x1);
    printf("Input the height of the stick (H_0):\n");
    scanf("%lf", &h0);
    h1 = h0*x1/x0;
    printf("The height of the pyramid is %.1lf\n", h1);
}