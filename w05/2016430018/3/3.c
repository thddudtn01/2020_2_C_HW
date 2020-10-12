/* Read in two integers and print their sum. */

#include <stdio.h>

int getGCD(int a, int b){
    int i = 1, ret = 1;
    int minVal;
    minVal = a>b?b:a;
    for(i=2;i<=minVal;i++){
        if(a%i==0&&b%i==0) ret = i;
    }
    return ret;
}

int getLCM(int a, int b, int gcd){
    return a*b/gcd;
}

int main(void)
{
int a, b, sum;
int gcd, lcm;

printf("Input two integers: ");
scanf("%d%d", &a, &b);
gcd = getGCD(a,b);
lcm = getLCM(a,b,gcd);
printf("greatest common divisor is %d.\n",gcd);
printf("least common multiple is %d.\n",lcm);
}