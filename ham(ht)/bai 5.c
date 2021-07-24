/* viet gia tri bieu thuc s=1+2+..+n
voi n la tham so truyen vao*/
#include<stdio.h>
int tong(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("tong = %d",tong(n));
    return 0;
}
