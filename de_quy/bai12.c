// tinh s(x,n) = x + x^2 + ... +x^n
#include<stdio.h>
int s(int x, int n){
    if(n == 1) return x;
    return x*s(x,n-1);
}
int s1(int x, int n){
    if(n == 1) return x;
    return s(x,n) + s1(x,n-1);
}
int main()
{
    int n;
    int x;
    printf("nhap x= ");
    scanf("%d", &x);
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s1(x,n));
    return 0;
}

