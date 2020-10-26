#include <stdio.h>
#include <string.h>

#define STRMAX 20

char upper(char c){
    if(c > 96 && c < 123) return c -32;
}

char lower(char c){
    if(c > 64 && c <91) return c + 32;
}

void main(){
    char str[STRMAX];
    int i, mode;

    printf("Input string: ");
    fgets(str, STRMAX, stdin);
    printf("Input mode: ");
    scanf("%d", &mode);
    //scanf("%[^\n]s", str);
    if(mode == 0) for(i=0;i<STRMAX;i++) str[i] = upper(str[i]);
    else if(mode == 1) for(i=0;i<STRMAX;i++) str[i] = lower(str[i]);
    printf("%s", str);
}