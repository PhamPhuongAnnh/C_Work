// tinh s(n) = 1+2+3+....+n
#include <stdio.h>
int s(int n){
    if(n == 1) return 1;
    return n+s(n-1);
}
int main(){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s(n));
    return 0;
}
