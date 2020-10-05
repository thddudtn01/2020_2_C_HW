#include <stdio.h>

int main(){
    int i, x;
    printf("Enter a integer: ");
    scanf("%d", &x);
    for(i = 1; i < x; i++) if(i % 3 == 0) printf("%d ", i);
    printf("\n");
    return 0;
}