//Tính tích tất cả “ước số” của số nguyên dương n
#include<stdio.h>
int main()
{
    int n;
    int s=1;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("tich cac uoc la: ");
    for(int i=1; i<n; i++){
        if(n%i==0)
           s*=i;
    }
     printf("%d",s);
    return 0;
}
