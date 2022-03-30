#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1005
char a[MAX][MAX];
int n,m;
int checkout(int i,int j)
{
    if(i<0 || i >= n || j<0 || j >=n)
    {
        return 0;
    }
    return 1;
}

void check(int x, int y)
{
    int i,j, dem =0;
    int dy[] = {y - 1, y + 1, y - 2, y + 2,y - 2, y + 2, y - 1, y + 1};
    int dx[] = {x - 2, x - 2, x - 1, x - 1,x + 1, x + 1, x + 2, x + 2};
    for(i=0; i<8; i++)
    {
        if(checkout(dx[i],dy[i])==1 && (a[dx[i]][dy[i]]=='Q' ||a[dx[i]][dy[i]]=='P'||a[dx[i]][dy[i]]=='K'||a[dx[i]][dy[i]]=='0'))
        {
            a[dx[i]][dy[i]] = 'X';
        }
    }

}

void check_Ma(){

}
void check_Hau(int x, int y)
{
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][j] = '0';
        }
    }
}
int main()
{
    //freopen("d:\\input.txt", "r", stdin);
    int i, j,q,k,p;
    do
    {

        scanf("%d%d", &m,&n);

        if(m ==0 && n ==0)
        {
            return 0;
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                a[i][j] = '0';
            }
        }
        scanf("%d", &q);
        for(i=0; i<q; i++)
        {
            int x1,  x2;
            scanf("%d%d", &x1, &x2);
            a[x1-1][x2-1] = 'Q';
        }
        scanf("%d", &k);
        for(i=0; i<k; i++)
        {
            int x1,  x2;
            scanf("%d%d", &x1, &x2);
            a[x1-1][x2-1] = 'K';
        }
        scanf("%d", &p);
        for(i=0; i<p; i++)
        {
            int x1,  x2;
            scanf("%d%d", &x1, &x2);
            a[x1-1][x2-1] = 'P';
        }

        for(i =0; i<m; i++)
        {
            for(j = 0; j < n; j++)
            {

            }

        }

    }
    while(m !=0 && n!=0);
    return 0;
}
