#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],b[10],c[10],n,i,k;

    scanf("%d",&n);
    scanf("%d",&k);
    int l = n<<k;
    int f = n>>k;
    printf("dich phai = %d", l);
    printf("\tdich trai = %d", f);
    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    printf("\nSo Nhi Phan ban dau = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    for(i=0; l>0; i++)
    {
        b[i]=l%2;
        l=l/2;
    }

    printf("\nSo nhi phan dich phai = ");

    for(i=i-1; i>=0; i--)
    {
        printf("%d",b[i]);
    }

    for(i=0; f>0; i++)
    {
        c[i]=f%2;
        f=f/2;
    }

    printf("\nSo nhi phan dich trai= ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",c[i]);
    }



    return 0;
}
