#include <stdio.h>
#include <stdlib.h>
#define STRMAX 20

int rmSpace(char *str, int size){
    int i, j = 0;
    for(i = 0; i < size; i++){
        while(*(str+i+j) == 32){
            j++;
        }
        *(str+i) = *(str+i+j);
    }
}

int main(){
    char *str;
    str = (char *)malloc(STRMAX*sizeof(char));
    printf("Input a string: ");
    fgets(str, STRMAX, stdin);
    rmSpace(str, STRMAX);
    printf("%s", str);
    free(str);
}