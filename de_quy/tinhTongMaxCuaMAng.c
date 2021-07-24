#include<stdio.h>
void nhapMang(int a[], int n, int i){
    if(i >= n) return ;
    scanf("%d", &a[i]);
    nhapMang(a, n, i+1);
}
void xuatMang(int a[], int n, int i){
    if(i >= n) return ;
    printf("%d\t", a[i]);
    xuatMang(a, n, i+1);
}
int tongMang(int a[], int n){
    if(n == 0) return a[0];
    return a[n] + tongMang(a, n-1);
}
int Max(int a[], int n){
    if(n == 0) return a[0];
    int m = Max(a,n-1);
    if(m<a[n-1])
        return a[n-1];
    return m;
}
float TBC(int a[], int n){
    return (float) tongMang(a,n)/n;
}


int main(){
    int n;
    int a[100];

    printf("nhap n= ");
    scanf("%d", &n);

    nhapMang(a,n,0);
    printf("Mang vua nhao la:\n" );
    xuatMang(a,n,0);
    printf("\nTong cac phan tu trong mang la: %d\n", tongMang(a,n));
    printf("MAX= %d\n", Max(a,n));
    printf("TBC= %f", TBC(a,n));

    return 0;
}
