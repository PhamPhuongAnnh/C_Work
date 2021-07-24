// tinh s = sqrt(2 + sqrt(2 +...sqrt(2+sqrt(2))))
#include<stdio.h>
#include<math.h>
float s(int n){
    if(n == 1) return sqrt(2);
    return sqrt(2+sqrt(n-1));
}
int main(){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %f", s(n));
    return 0;
}

