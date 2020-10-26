#include <stdio.h>

int strcmp(const char *s1, const char *s2){
    while(*s1 != NULL && *s2 != NULL){
        if(*s1 < *s2) return -1;
        else if(*s1 > *s2) return 1;
        s1++;
        s2++;
    }
    if(*s1 != NULL && *s2 == NULL) return 1;
    if(*s1 == NULL && *s2 != NULL) return -1;
    if(*s1 == NULL && *s2 == NULL) return 0;
}

void main(){
    char s1[20] = {NULL}, s2[20] = {NULL};
    int ret;

    printf("Input str1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Input str2: ");
    fgets(s2, sizeof(s2), stdin);
    
    ret = strcmp(s1, s2);
    if(ret == 1) printf("str1 is bigger than str2.\n");
    else if(ret == -1) printf("str2 is bigger than str1.\n");
    else printf("str1 is same at str2.\n");
}