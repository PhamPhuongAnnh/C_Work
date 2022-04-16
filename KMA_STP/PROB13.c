
#include <stdio.h>
#include <math.h>
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int checkout(int i,int j, int n)
{
    if(i<0 || i >= n || j<0 || j >=n)
    {
        return 0;
    }
    return 1;
}

int quayPhai(int huong)
{
    return (huong+1)%4;
}
int quayTrai(int huong)
{
    return (huong+3)%4;
}

int main(void)
{
    freopen("d://input.txt", "r", stdin);
    int testcase;
    scanf("%d", &testcase);
    int i, m, n, t,j ;
    for(t =0; t<testcase; t++)
    {
        int dem = 0, huong = 2;
        scanf("%d\n", &n);
        char a[n][n];
        for(i =0; i<n; i++)
        {
            for(j =0; j<n; j++)
            {
                scanf("%c ", &a[i][j]);
            }
        }
        for(i =0; i<n; i++)
        {
            for(j =0; j<n; j++)
            {
                if(checkout(i,j,n) == 1)
                {

                    if(a[i][j] == '//')
                    {
                        printf("%d, %d, %d\n",huong, i,j);
                        huong = quayTrai(huong);
                        dem++;
                    }
                    else if (a[i][j] == '\\')
                    {
                        printf("%d, %d, %d\n",huong, i,j);
                        huong = quayPhai(huong);
                        dem++;
                    }
                    else
                    {
                        printf("%d, %d, %d\n",huong, i,j);
                    }
                    i += dx[huong];
                    j +=dy[huong];
                }
                else
                {
                    printf("#%d %d\n", t+1, dem);
                    return 0;
                }
            }
        }



    }
    return 0;
}

