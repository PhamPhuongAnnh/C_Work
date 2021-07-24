/* f(0) = 1; f(1)=2; f(2)=3
f(n) = 3f(n-2) + 2f(n-3)
tim n nho nhat de f(n) >= 100*/
#include<stdio.h>

int s(int n){
    if(n == 0) return  1;
    if(n == 1) return 2;
    if(n == 2) return 3;
    return 3*s(n-2) + 2*s(n-3);
}
int main()
{
    int n=0;
    while(s(n)<100){
        n++;
    }
    printf("so n nho nhat thoa man la: %d",n);

    return  0;
}
