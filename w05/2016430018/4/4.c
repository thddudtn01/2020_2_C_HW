//2019 hw4
#include <stdio.h>
#include <math.h>

float getLength(float x1, float y1, float x2, float y2){
    float ret;
    ret = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return ret;
}

int isTriangle(float len1, float len2, float len3){
    if(len1 >= len2 && len1 >= len3 && len1 < len2+len3)
    return 1;
    else return 0;
}

int main(){
    float x1, x2, x3;
    float y1, y2, y3;
    float len1, len2, len3;
    int ret = 0;
    printf("input two float: ");
    scanf("%f %f", &x1, &y1);
    printf("input two float: ");
    scanf(" %f %f", &x2, &y2);
    printf("input two float: ");
    scanf(" %f %f", &x3, &y3);
    len1 = getLength(x1,y1,x2,y2);
    len2 = getLength(x2,y2,x3,y3);
    len3 = getLength(x1,y1,x3,y3);
    
    if(isTriangle(len1, len2, len3) || isTriangle(len2, len1, len3)
        || isTriangle(len3, len1, len2)){
        printf("There is a triangle\n");
    }
    else printf("There is no triagnle\n");
}