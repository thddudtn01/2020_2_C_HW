#include <stdio.h>

int main(){
    int a, b, c;
    int x;
    printf("Enter the number of items that cost 100won : ");
    scanf("%d", &a);
    printf("Enter the number of items that cost 2000won : ");
    scanf("%d", &b);
    printf("Enter the number of items that cost 6000won : ");
    scanf("%d", &c);

    printf("Enter the amount of money you paid : ");
    scanf("%d", &x);
    printf("The change is %d won.\n",x-(100*a+2000*b+6000*c));
}