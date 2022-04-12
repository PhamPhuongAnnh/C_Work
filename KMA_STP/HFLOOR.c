#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 105
char a[MAX][MAX];
int m,n, dem, people;

void input()
{
    int i,j;
     people = 0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%c ",&a[i][j]);
            if(a[i][j] == '*')
            {
                people++;
            }
        }
    }
}
void output()
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%c ",a[i][j]);

        }
        printf("\n");
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

void check_Phong(int x, int y)
{
    int i,j;
    int dx[4] = {x,x-1,x,x+1};
    int dy[4] = {y-1,y,y+1,y};
    if(checkout(x,y)==0){
        return;
    }
    if(a[x][y] == '#'){
        return;
    }
    a[x][y] = '#';
    for(i=0; i<4; i++)
    {
        check_Phong(dx[i], dy[i]);
    }
}

void count_H()
{
    int i,j;
    dem = 0;

    for(i = 0; i< m; i++)
    {
        for(j = 0; j <n; j++)
        {
            if(a[i][j] != '#')
            {
                dem ++;
                check_Phong(i,j);
            }
        }
    }
}
int main()
{
    freopen("d://input.txt", "r", stdin);
    int t,testcase;
    scanf("%d",&t);
    for(testcase = 1; testcase <= t; testcase++)
    {
        scanf("%d%d\n",&m,&n);
        input();
        count_H();
        printf("%.2f\n",(double) people/dem);
    }
    return 0;
}

