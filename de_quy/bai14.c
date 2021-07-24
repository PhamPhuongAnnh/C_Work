
// s(n) = x +x^3 +x^5 + ... + x^(2n+1)
#include<stdio.h>
#include<math.h>
int s(int x, int n){
    if(n == 0 ) return x ;
    return pow(x,(2*n+1)) + s(x,n-1);
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

