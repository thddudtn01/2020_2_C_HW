#include <stdio.h>

struct {
    int i0;
    double d;
    int i1;
} struct0;

struct {
    int i0;
    int i1;
    double d;
} struct1;

struct {
    char c;
    short s;
} struct2;

struct {
    char c;
    short s;
    int i;
} struct3;

struct {
    char c;
    int i;
    short s;
} struct4;

union {
    char c;
    short s;
    int i;
} union0;

void main(){
    printf("size of struct0 is %ld\n", sizeof(struct0));
    printf("size of struct1 is %ld\n", sizeof(struct1));
    printf("size of struct2 is %ld\n", sizeof(struct2));
    printf("size of struct3 is %ld\n", sizeof(struct3));
    printf("size of struct4 is %ld\n", sizeof(struct4));
    printf("size of union0 is %ld\n", sizeof(union0));
}