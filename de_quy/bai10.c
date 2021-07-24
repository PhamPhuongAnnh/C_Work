// tinh t(x,n) = x^n
#include<stdio.h>
int s(int x, int n){
    if(n == 1) return x;
    return x*s(x,n-1);
}
int main()
{
    int n;
    int x;
    printf("nhap x= ");
    scanf("%d", &x);

    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s(x,n));
    return 0;
}

