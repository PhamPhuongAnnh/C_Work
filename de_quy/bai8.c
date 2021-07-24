// s(n) = 1/2 + 3/4 + .. + (2n+1)/(2n+2)

#include<stdio.h>
float s(int n){
    if(n == 0) return (float) 1/2;
    return (float) (2*n+1)/(2*n+2) +s(n-1);
}

int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s(n));
    return 0;
}

