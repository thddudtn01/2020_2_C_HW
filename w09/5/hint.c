#include <stdio.h>

enum FigureType{
    none,
    point,
    rect = 4,
    line = 2,
    tri
};
typedef enum FigureType FigureType;

struct Polygon{
    FigureType type;
    int side;
    int diagonal;
} polygon;

int main(){
    printf("Enter number of figure's point: ");
    scanf("%d", &polygon.type);
    switch (polygon.type)
    {
        //TODO
    }
    //printf("number of polygon's side is %d.\n", polygon.side);
    //printf("number of polygon's diagonal is %d.\n", polygon.diagonal);
}