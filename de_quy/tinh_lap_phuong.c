// s= 1^3+ 2^3 + ... + n^3
#include<stdio.h>
int s(int n)
{
    if(n == 1) return 1;
    return n*n*n + s(n-1);
}
int main ()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s(n));
}
