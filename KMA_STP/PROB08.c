#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1005
char a[MAX][MAX];
int n;
int checkout(int i,int j)
{
    if(i<0 || i >= n || j<0 || j >=n)
    {
        return 0;
    }
    return 1;
}

int check(int x, int y)
{
    int i,j, dem =0;
    int dy[] = {y - 1, y + 1, y - 2, y + 2,y - 2, y + 2, y - 1, y + 1};
    int dx[] = {x - 2, x - 2, x - 1, x - 1,x + 1, x + 1, x + 2, x + 2};
    for(i=0; i<8; i++)
    {
        if(checkout(dx[i],dy[i])==1 && (a[dx[i]][dy[i]]=='M' ||a[dx[i]][dy[i]]=='K'))
        {
            dem++;
        }
    }
    return dem;
}

typedef struct
{
    int x,y;
} toaDo;
int main()
{
    freopen("d://input.txt", "r", stdin);
    int testcase;
    scanf("%d", &testcase);
    int t,i,j,k,m,d;
    for(t=0; t<testcase; t++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                a[i][j] = '0';
            }
        }
        int max = -1, x=0,y=0;
        scanf("%d%d%d%d", &n, &k, &m, &d);
        toaDo b[k];
        for(i=0; i<k; i++)
        {
            scanf("%d%d", &b[i].x, &b[i].y);
            a[b[i].x][b[i].y] = 'M';
        }
        for(i=0; i<m; i++)
        {
            int x1, y1;
            scanf("%d%d", &x1, &y1);
            a[x1][y1] = 'K';
        }
        for(i=0; i<d; i++)
        {
            int x1, y1;
            scanf("%d%d", &x1, &y1);
            a[x1][y1] = '0';
        }

        for(i=0; i<k; i++)
        {
            int dem = check(b[i].x, b[i].y);
            if(dem>max)
            {
                max = dem;
                x = b[i].x;
                y = b[i].y;
            }
        }
        printf("#%d %d %d %d\n", t+1, x,y,max);

    }
    return 0;
}
