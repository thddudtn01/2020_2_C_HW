#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII code of character '%c' is %d.\n", c, c);
}