/*viet ham liet ke so nguyen to trong doan a,b*/
#include<stdio.h>
int kiemTraSoNguyenTo(int n)
{
    if (n<2)
        return 0;
    if (n==2)
        return 1;
    if (n>2)
    {
        for ( int i=2; i<n; i++)
        {
            if (n%i==0)
                return 0;
        }
    }
    return 1;
}
void soNguyenToTrongDoan (int a, int b) {
    for (int i=a; i<=b; i++) {
        if(kiemTraSoNguyenTo(i))
            printf("%d ",i);
    }
}
int main()
{
    int a,b;
    printf("nhap a,b: ");
    scanf("%d%d",&a,&b);
    printf("so cac so nguyen to trong doan %d %d\n",a,b);
    soNguyenToTrongDoan(a,b);
    return 0;
}
