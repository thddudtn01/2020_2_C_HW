// Note 2020/w04/1.c.

#include <stdio.h>
#include <math.h>

#define add(x,y) (x)+(y)
#define mul(x,y) (x)*(y)
#define sub(x,y) (x)-(y)
#define div(x,y) (x)/(y)
#define sine(x) sin(x)
#define cosi(x) cos(x)

int main(){
    float x, y, z;
    char c;
    printf("Input two float: ");
    scanf("%f %f",&x,&y);
    fflush(stdin);
    printf("Input operation: ");
    scanf(" %c", &c);
    switch(c){
        case '+':
        z = add(x,y);
        break;
        case '-':
        z = sub(x,y);
        break;
        case '*':
        z = mul(x,y);
        break;
        case '/':
        z = div(x,y);
        break;
        case 's':
        z = sine(x);
        break;
        case 'c':
        z = cosi(x);
        break;
    }
    printf("Output : %.2f\n", z);
}
