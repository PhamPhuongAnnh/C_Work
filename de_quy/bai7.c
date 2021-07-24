// s(n) = 1/2 + 2/3 + .. + n/ (n+1)
#include<stdio.h>
float s(int n){
    if(n == 1) return (float) 1/2;
    return (float) n/(n+1) +s(n-1);
}

int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s(n));
    return 0;
}
