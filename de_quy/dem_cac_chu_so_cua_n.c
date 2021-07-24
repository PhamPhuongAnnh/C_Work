#include<stdio.h>
int demSoChuSo(int n){
    n/10;
    if(n<10) return 1;
    return 1+ demSoChuSo(n/10);
}
int main (){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("so cac chu so cua %d la %d ",n,demSoChuSo(n));
    return 0;
}
