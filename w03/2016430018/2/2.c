#include <stdio.h>

int main(){
    char x, y, z;
    /*
    printf("Input a first number : \n");
    scanf("%hhx", &x);
    printf("Input a second number : \n");
    scanf("%hhx", &y);
    */
    printf("Enter two hexadecimal 2 bytes : ");
    scanf("%hhx %hhx", &x, &y);
    z = x + y;
    printf("%d + %d = %d\n", x,y,z);
    z = x - y;
    printf("%d - %d = %d\n", x,y,z);
    z = x * y;
    printf("%d * %d = %d\n", x,y,z);
    z = x / y;
    printf("%d / %d = %d\n", x,y,z);
}