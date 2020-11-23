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
    case none:
    case point:
    case line:
        printf("This figure is not polygon.\n");
        return 0;
    case tri:
        polygon.side = 3;
        polygon.diagonal = 0;
        break;
    case rect:
        polygon.side = 4;
        polygon.diagonal = 2;
        break;
    default:
        break;
    }
    printf("number of polygon's side is %d.\n", polygon.side);
    printf("number of polygon's diagonal is %d.\n", polygon.diagonal);
}