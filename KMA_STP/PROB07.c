#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 205
char a[MAX][MAX];
int m,n, dem;

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
    if(i<0 || i >= m || j<0 || j >=n) {
       return 0;
    }
    return 1;
}

void check(int x, int y)
{
    int i,j;
    int dx[8] = {x,x-1,x-1,x-1, x,x+1, x+1, x+1};
    int dy[8] = {y-1,y-1,y,y+1, y+1, y+1, y,y-1};
    for(i=0; i<8; i++)
    {
        if(checkout(dx[i],dy[i])==1 && a[dx[i]][dy[i]]=='*')
        {
            dem++;
        }
    }
}

void count_H()
{
    int i,j;
    for(i = 0; i< m; i++)
    {
        for(j = 0; j <n; j++)
            {
                if(a[i][j] == '.')
                {
                    check(i,j);
                }
            }
    }

}
int main()
{
    //freopen("d://input.txt", "r", stdin);
    int t,testcase;
    scanf("%d",&t);
    for(testcase = 1; testcase <= t; testcase++)
    {

        scanf("%d%d\n",&m,&n);
        dem = 0;
        input();
        count_H();
        printf("Case #%d: %d\n",testcase,dem);
    }
    return 0;
}
