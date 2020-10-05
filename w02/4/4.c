#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float x;
    printf("    degree      sine    cosine   tangent\n");
    for(i = 0; i < 40; i++) printf("=");
    printf("\n");
    for(i = 0; i< 21; i++)
    {
        x = M_PI * i / 10;
        printf("%10d", i);
        printf("%10.4lf", sin(x));
        printf("%10.4lf", cos(x));
        printf("%10.4lf\n", tan(x));
    }
    return 0;
}