/*tim max (int a, int b, int c)*/
#include<stdio.h>
int max(int a, int b,int c)
{
    int max;
    if(a>b)
        max=a;
    else max=b;
    if(max<c)
        {
            max=c;
        }
        return max;
}
int main()
{
    int a,b,c;
    printf("nhap a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("max= %d",max(a,b,c));
    return 0;
}
