#include<stdio.h>
// tim uoc so le lon nhat cua so nguyen duong n. vd n = 100 thi  uoc so le lon nhat la 25
int kTChanLe(int n){
    if(n%2 != 0)
        return 1;
    return 0;
}
int timUocLeMax(int n,int d){
    if(n == 0 && kTChanLe(d)) return d;
    return timUocLeMax(n%d,d);
}
int main ()
{
    int n,d;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("uoc so le lon nhat cua n la: %d ", timUocLeMax(n,d));
    return 0;
}
