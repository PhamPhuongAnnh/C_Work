#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Len 1005 // dinh nghia so luong phan tu mang
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    int d = 0, gt = 1;
    int hang = m - 1, cot = n - 1;
    while (gt <= m * n)
    {
        for (int i = d; i <= cot; i++)
        {
            a[d][i] = gt++;
        }
        for (int i = d + 1; i <= hang; i++)
        {
            a[i][cot] = gt++;
        }
        for (int i = cot - 1; i >= d && gt <= m * n; i--)
        {
            a[hang][i] = gt++;
        }
        for (int i = hang - 1; i > d && gt <= m * n; i--)
        {
            a[i][d] = gt++;
        }
        d++;
        hang--;
        cot--;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

}


