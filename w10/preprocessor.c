#include <stdio.h>

#define test1 0

int main(){
#if 0
    printf("1\n");
#endif
#if test1
    printf("2\n");
#else
    printf("3\n");
#endif
#ifdef test1
    printf("4\n");
#endif
#ifdef test2
    printf("5\n");
#endif
}



doSomething1();
/* Comment line */
doSomething2();
/*
doSomething3();
*/