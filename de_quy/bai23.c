// dem so luong chu so cua so nguyen dung cua n
#include<stdio.h>
int s(int n){
    n/10;
    if(n<10) return 1;
    return 1+s(n/10);
}
int main (){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("so cac chu so cua %d la: %d",n,s(n));
    return 0;
}


