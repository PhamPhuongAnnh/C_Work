#include <stdio.h>
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void demSoLe(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            dem++;
        }
    }
    return dem;
}


void demSoChan(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    freopen("D:\\input\\input.txt","r",stdin);
    unsigned int t;
    scanf("%u", &t);
    int n;
    scanf("%d",&n);
    double a[n];
    nhap(a,n);
    demSoChan(a,n);
    demSoLe(a,n);
    for(int i=0; i<t; i++)
    {
        printf("Testcase %d: %d even element(s), %d odd element(s)\n",i,demSoChan(a,n),demSoLe(a,n));
    }

}
