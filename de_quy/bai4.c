//  s(n) = 1/2 + 1/4 + ... +1/2n

#include<stdio.h>
float s(int n){
    if(n == 1) return (float)1/2;
    return (float) 1/(2*n) + s(n -1);
}
int main (){

    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf(" S= %.3f", s(n));
    return 0;
}
