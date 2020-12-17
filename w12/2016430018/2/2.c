#include <stdio.h>
#include <string.h>
#define MAXCHAR 256

int main(){
    int n, i;
    char filename[9] = "./chn.txt", line[MAXCHAR];
    char str[10000] = "";
    FILE *fp, *fpw;
    fpw = fopen("./book.txt", "w");
    while(1){
        printf("Input integer: ");
        scanf("%d", &n);
        if(n < 1) break;
        filename[4] = n + '0';

        fp = fopen(filename, "r");
        while(fgets(line, MAXCHAR, fp) != NULL){
            fprintf(fpw, "%s", line);
        }
        fprintf(fpw, "\n");
        fclose(fp);
    }
    fclose(fpw);
}