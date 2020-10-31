#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point *p[2];
    float len;
} Line;

float getLen(Line l){
    //TODO
}

int main(){
    int i;
    Line line;
    Point point[2];

    for(i = 0; i < 2; i++){
        //TODO
    }

    line.len = getLen(line);
    printf("Length of line is %.1f\n", line.len);
}