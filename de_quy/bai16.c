

// s = x + (x^2)/2 + ... + (x^n)/n

#include<stdio.h>
float s1(int x, int n){
    if(n == 1) return 1;
    return (float)pow(x,n)/n + s1(x,n-1);
}
int main()
{
    int n;
    int x;
    printf("nhap x= ");
    scanf("%d", &x);
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s1(x,n));
    return 0;
}
