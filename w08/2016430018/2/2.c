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

void lower(char *c){
    int i;
    for(i = 0; i < strlen(c);i++)
    if(c[i] > 64 && c[i] <91) c[i] = c[i] + 32;
}

int main(){
    char buf[8], buflwr[8]; 
    int i, j, cnt = 0;
    for(i = 0; i < 10; i++){
        printf("Enter name of student: ");
        scanf("%s", buf);
        strcpy(buflwr, buf);
        lower(buflwr);
        if(strcmp(buflwr, "end") == 0) break;
        strcpy(student[i].name, buf);
        printf("Enter %s's score of Math: ", student[i].name);
        scanf("%d", &student[i].math);
        printf("Enter %s's score of English: ", student[i].name);
        scanf("%d", &student[i].eng);
        printf("Enter %s's score of Science: ", student[i].name);
        scanf("%d", &student[i].sci);
        student[i].sum = student[i].math + student[i].eng + student[i].sci;
        student[i].avg = student[i].sum/3.0;
        for(j = 0; j < 40; j++) printf("-");
        printf("\n");
        cnt++;
    }
    printf("Done.\n\n");

    printf("%-10s%-10s%-10s%-10s%-10s%-10s%-7s\n", "No.", "Name", "Math",
     "English", "Science", "Total", "Average");
    for(i = 0; i < cnt; i++){
        printf("%-10d%-10s%-10d%-10d%-10d%-10d%-.1f\n", i, student[i].name,
            student[i].math, student[i].eng, student[i].sci, student[i].sum,
            student[i].avg);
    }
}