#include <stdio.h>

#define SQ1(x) x*x
#define SQ2(x) (x)*(x)
#define SQ3(x) ((x)*(x))

int main(){
    float x;
    printf("Input integer: ");
    scanf("%f", &x);
    printf("SQ1(x) = %.2f\n", 1.0/SQ1(x));
    printf("SQ2(x) = %.2f\n", 1.0/SQ2(x));
    printf("SQ1(x+1) = %.2f\n", 1.0/SQ1(x+1));
    printf("SQ2(x+1) = %.2f\n", 1.0/SQ2(x+1));
    printf("SQ3(x+1) = %.2f\n", 1.0/SQ3(x+1));
}