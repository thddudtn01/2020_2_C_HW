#include <stdio.h>
#include <string.h>

struct {
    char name[8];
    int math;
    int eng;
    int sci;
    int sum;
    float avg;
} student[10];

int main(){
    int i, j, cnt = 0;
    for(i = 0; i < 10; i++){
        //TODO
        for(j = 0; j < 40; j++) printf("-");
        printf("\n");
        cnt++;
    }
    printf("Done.\n\n");

    printf("%-10s%-10s%-10s%-10s%-10s%-10s%-7s\n", "No.", "Name", "Math",
     "English", "Science", "Total", "Average");
    for(i = 0; i < cnt; i++){
        //TODO
        //printf("%-10d%-10s%-10d%-10d%-10d%-10d%-.1f\n", SOMETHING);
    }
}