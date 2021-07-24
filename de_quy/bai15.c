
// s = 1 + 1/(2+1) + ... + 1/(1+2+3+4+.. +n)

#include<stdio.h>

#include<stdio.h>
int s(int n){
    if(n == 1) return 1;
    return n*s(n-1);
}
float s1(int n){
    if(n == 1) return 1;
    return (float)1/s(n)+s1(n-1);
}
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s1(n));
    return 0;
}
