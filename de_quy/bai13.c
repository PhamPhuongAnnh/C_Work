// tinh s(x,n) = x^2 + x^4 + ... +x^2n
#include<stdio.h>
#include<math.h>
int s(int x, int n){
    if(n == 1 ) return x*x;
    return pow(x,2*n) + s(x,n-1);
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

