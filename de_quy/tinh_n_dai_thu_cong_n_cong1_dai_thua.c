
// tinh s = 1+ 1*2+ ....+1*2*3*...*n

#include<stdio.h>
int s1(int n){
    if(n == 1) return 1;
    return n*s1(n-1);
}
int s(int n){
    if(n == 1) return 1;
    return s1(n) + s(n-1);
}
int main (){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s(n));
}
