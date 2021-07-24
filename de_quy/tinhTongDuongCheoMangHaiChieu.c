#include<stdio.h>
void nhapMang(int a[][100], int d, int c, int i, int j){
    if(i>=d && j>=c)
        return;
    scanf("%d", &a[i][j]);
    nhapMang(a,d,c,i,j);
}
void xuatMang(int a[][100], int d, int c, int i, int j){
    if(i>=d && j>=c)
        return;
    printf("%d", a[i][j]);
    xuatMang(a,d,c,i,j);
}
int main(){
    int d,c;
    int a[100][100];
    printf("nhap dong cot= ");
    scanf("%d%d", &d,&c);
    nhapMang(a,d,c,0,0);
    xuatMang(a,0,0);
}

