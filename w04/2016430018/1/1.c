#include <stdio.h>

int main(){
    int x, y, z;
    char c;
    printf("Input two integer: ");
    scanf("%d %d",&x,&y);
    fflush(stdin);
    printf("Input operation: ");
    scanf(" %c", &c);
    switch(c){
        case '+':
        z = x+y;
        break;
        case '-':
        z = x-y;
        break;
        case '*':
        z = x*y;
        break;
        case '/':
        z = x/y;
        break;
    }
    printf("%d %c %d = %d\n", x, c, y, z);
}