#include <stdio.h>
#include <string.h>
#define MAXCHAR 256

int main(){
    int n, cnt = 0;
    char filename[9] = "./chn.txt", line[MAXCHAR];
    FILE *fp;
    printf("Input integer: ");
    scanf("%d", &n);
    filename[4] = n + '0';

    fp = fopen(filename, "r");
    while(fgets(line, MAXCHAR, fp) != NULL){
        printf("ln%d: %s", cnt++, line);
    }
    fclose(fp);
}