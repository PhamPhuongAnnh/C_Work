/* viet ham tim max (int a, intb)
tim max (int a, int b, int c)*/
#include<stdio.h>
int max(int a, int b)
{
    if(a>b){
        return a;
    }
    return b;
}
int main()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d %d",&a,&b);
    printf("max= %d",max(a,b));
    return 0;
}
