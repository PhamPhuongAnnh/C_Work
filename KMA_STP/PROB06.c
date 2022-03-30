#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 105
char a[MAX][MAX];
int m,n,count;

void input()
{
	count =0;
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%c ",&a[i][j]);
			if(a[i][j] == 'H'){
				count++;
			}

        }
    }
}
int checkout(int i,int j)
{
    if(i<0 || i >= m || j<0 || j >=n) return 0;
    return 1;
}

void check(int x, int y, int z)
{
    int i,j;
    int dx[4] = {x,x-z,x,x+z};
    int dy[4] = {y-z,y,y+z,y};
    for(i=0; i<4; i++)
    {
        if(checkout(dx[i],dy[i])==1 && a[dx[i]][dy[i]]=='H')
        {
            a[dx[i]][dy[i]] = 'X';
			count--;
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
                if(a[i][j] == 'A')
                {
                    check(i,j,1);
                }
                if(a[i][j] == 'B')
                {
                    check(i,j,1);
                    check(i,j,2);
                }
                if(a[i][j] == 'C')
                {
                    check(i,j,1);
                    check(i,j,2);
                    check(i,j,3);
                }
            }
    }

}
int main()
{
    int t,testcase;
    scanf("%d",&t);
    for(testcase = 1; testcase <= t; testcase++)
    {
        scanf("%d%d\n",&m,&n);
        input();
        count_H();
        printf("#%d %d\n",testcase,count);
    }
    return 0;
}
