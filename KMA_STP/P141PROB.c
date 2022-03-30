#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 105
char a[MAX][MAX];
int m,n;
void input()
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%c ",&a[i][j]);
        }
    }
}
int checkout(int i,int j)
{
    if(i<0 || i >= m || j<0 || j >=n)
    {
        return 0;
    }
    return 1;
}

int check(int x, int y)
{
    int i,j, dem =0;
    int dx[8] = {x,x-1,x-1,x-1, x,x+1, x+1, x+1};
    int dy[8] = {y-1,y-1,y,y+1, y+1, y+1, y,y-1};
    for(i=0; i<8; i++)
    {
        if(checkout(dx[i],dy[i])==1 && a[dx[i]][dy[i]]=='o')
        {
            dem++;
        }
    }
    return dem;
}

int count_H()
{
    int i,j, dem, max =0,x =0,  y =0, count_max = 0;

    int flag = 0;
    for(i = 0; i< m; i++)
    {
        for(j = 0; j <n; j++)
        {
            dem =0;
            if(a[i][j] == '.')
            {
                dem = check(i,j);
                flag = 1;
            }
            if(dem>max)
            {
                max = dem;
                x = i;
                y = j;
            }
        }
    }
    if(flag == 1)
    {
        a[x][y] = 'o';
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] == 'o')
            {
                count_max += check(i, j);
                a[i][j] = '.';
            }
        }
    }
    return count_max;
}
int main()
{
    // freopen("d://input.txt", "r", stdin);
    int t,testcase;
    scanf("%d%d\n",&m,&n);
    input();
    int dem = count_H();
    printf("%d",dem);
    return 0;
}
