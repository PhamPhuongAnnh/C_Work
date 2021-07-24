
// s(n) = 1 + 1/2 +....+1/n

#include<stdio.h>
#include<math.h>
float s(int n){
    if(n == 1) return 1;
    return (float) 1/n +s(n-1);
}

int main(){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("S= %.3f", s(n));
    return 0;
}
