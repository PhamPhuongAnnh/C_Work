// s(n) = 1 + 1/3 + 1/5 + ... + 1/(2n +1)
#include<stdio.h>

float s(int n){
    if(n == 0) return 1;
    return (float) 1/(2*n +1) + s(n-1);
}
int main (){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s(n));
    return 0;
}
