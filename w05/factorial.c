/* Factorial is implemented recursively. */

#include <stdio.h>

int facto(int);

int main(){
    int n, output;
    printf("Enter a integer: ");
    scanf("%d", &n);
    output = facto(n);
    printf("%d factorial is %d\n", n, output);
    return 0;
}

int facto(int n){
    if(n==1) return 1;
    else return n * facto(n-1);
}