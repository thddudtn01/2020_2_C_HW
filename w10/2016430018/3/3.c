#include <stdio.h>
#include <ctype.h>

 int main(){
     char buff[100];
     int i, toggle = 0;
     printf("Input string: ");
     fgets(buff, 100, stdin);
     buff[0] = toupper(buff[i]);
     for(i = 0; buff[i] != '\0'; i++){
        if(isspace(buff[i])){
            toggle = 1;
        }
        else if(toggle == 1){
            buff[i] = toupper(buff[i]);
            toggle = 0;
        }
     }
     printf("%s", buff);
 }