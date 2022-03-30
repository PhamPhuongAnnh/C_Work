#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int giaTri;
    int chiso;
} data;
int compate(const void *a, const void *b)
{
    return (*(data*)a).giaTri - (*(data*)b).giaTri;
}

void nhap(int a[], int n)
{
    int i;
    for(int i =0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    int i;
    for(int i =0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

}
int main(void)
{
    int testcase;
    scanf("%d", &testcase);
    int i, n, j;
    for(i = 0; i<testcase; i++)
    {
        scanf("%d", &n);
        data a[n];
        for(j =0; j<n; j++)
        {
            scanf("%d", &a[j].giaTri);
        }
        for(j =0; j<n; j++)
        {
            scanf("%d", &a[j].chiso);
        }
        qsort(a, n, sizeof(data), compate);

        for(j = n-2; j>=0; j--)
        {
            int cur = j;
            for(int k=0; k<a[cur].chiso; k++)
            {
                int temp1 = a[cur].giaTri;
                a[cur].giaTri = a[cur+1].giaTri;
                a[cur+1].giaTri = temp1;
                int temp2 = a[cur].chiso;
                a[cur].chiso = a[cur+1].chiso;
                a[cur+1].chiso = temp2;
                cur++;
            }
        }
        for(j =0; j<n; j++)
        {
            printf("%d ", a[j].giaTri);
        }

    }

    return 0;
}
