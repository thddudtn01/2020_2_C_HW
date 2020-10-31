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
    float tmp[2];
    tmp[0] = (l.p[0]->x - l.p[1]->x);
    tmp[1] = (l.p[0]->y - l.p[1]->y);
    tmp[0] = sqrt(pow(tmp[0],2) + pow(tmp[1], 2));
    return tmp[0];
}

int main(){
    int i;
    Line line;
    Point point[2];

    for(i = 0; i < 2; i++){
        printf("Enter point's x, y value: ");
        scanf("%d %d", &point[i].x, &point[i].y);
        line.p[i] = &point[i];
    }

    line.len = getLen(line);
    printf("Length of line is %.1f\n", line.len);
}