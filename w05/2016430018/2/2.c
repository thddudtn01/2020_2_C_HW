/* Read in two integers and print their sum. */

#include <stdio.h>

int GBC(int n, int k){
    int ret;
    if(k==0||k==n) ret = 1;
    else ret = GBC(n-1,k-1) + GBC(n-1,k);
    return ret;
}

int main(void)
{
    int a, b, gbc;

    printf("Input two integers: ");
    scanf("%d%d", &a, &b);
    gbc = GBC(a,b);
    printf("binomial coefficient is %d.\n",gbc);
}