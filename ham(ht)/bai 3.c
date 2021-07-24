/*tim uoc chung lon nhat (a,b)*/
#include<stdio.h>
int UCLN( int a,int b)
{
    int c;
    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
    }
        if(a<b)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
                c=i;
        }
    }
    return c;

}
int main()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d%d",&a,&b);
    printf("UCLN= %d",UCLN(a,b));
    return 0;
}
