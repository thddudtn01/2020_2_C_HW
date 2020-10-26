#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rmSpace(char *str, int size){
    int i, j = 0;
    for(i = 0; i < size; i++){
        if(*(str+i+j) == 32) j++;
        *(str+i) = *(str+i+j);
    }
}

int isPalindrome(char *str, int strLen){
    int i, ret;
    char *str2 = calloc(20, sizeof(char));
    for(i = 0; i < strLen - 1; i++){
        str2[strLen-2 -i] = str[i];
    }
    str2[strLen-1] = '\n';
    printf("reversed string: %s", str2);
    if(strcmp(str, str2) == 0) ret = 1;
    else ret = 0;
    free(str2);
    return ret;
}

int main(){
    int len;
    char *str;
    str = (char *)calloc(20, sizeof(char));
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    rmSpace(str, 20);
    len = strlen(str);
    if(isPalindrome(str, len) == 1)
    printf("This string is a palindrome\n");
    else printf("This string is not a palindrome\n");
    free(str);
}