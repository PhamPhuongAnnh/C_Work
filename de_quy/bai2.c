// s(n) = 1^2 +2^2 +.... + n^2
#include <stdio.h>
int s(int n){
    if(n == 1) return 1;
    return n*n+s(n-1);
}
int main(){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %d", s(n));
    return 0;
}

