#include <stdio.h>

int main(){
    double f, c;
    printf("Enter a degree in Fahrenheit: ");
    scanf("%lf", &f);
    c = 5.0/9.0*(f-32.0);
    printf("%.1lf degrees Fahrenheit is %.1lf degrees Celsius.\n", f, c);
}