#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double D;
    double x1, x2;
    printf("Enter a : ");
    scanf("%lf", &a);
    printf("Enter b : ");
    scanf("%lf", &b);
    printf("Enter c : ");
    scanf("%lf", &c);

    D = pow(b,2) - 4*a*c;
    if(D > 0){
        x1 = (-b - sqrt(D))/(2*a);
        x2 = (-b + sqrt(D))/(2*a);
        printf("There are two different root.\nx1 = %.2lf, x2 = %.2lf\n", x1,x2);
    }
    else if(D == 0)
    printf("There is multiple root.\nx = %.2lf\n", (-b + sqrt(D))/(2*a));
    else printf("There is no root.\n");
}