#include <stdio.h>

int main(void)
{
   // freopen("d:\\input.txt", "r", stdin);
    int testcase;
    scanf("%d", &testcase);
    int i, m, n, t,j,dem;
    for(t =0; t<testcase; t++)
    {
        scanf("%d", &m);
        scanf("%d\n", &n);
        char a[5*m+1][5*n+1];
        for(i =0; i<5*m+1; i++)
        {
            for(j =0; j<5*n+1; j++)
            {
                scanf("%c ", &a[i][j]);
            }
        }

        int kq[5] = {0};
        for(i =1; i<5*m+1; i+=5)
        {
            for(j =1; j<5*n+1; j+=5)
            {
                dem =0;
                for(int k =i; k<i+5; k++)
                {
                    if(a[k][j] == '*')
                    {
                        dem++;
                    }
                    else
                    {
                        break;
                    }
                }
                kq[dem]++;
            }

        }
//        printf("1");
        printf("#%d %d %d %d %d %d\n", t+1, kq[0], kq[1], kq[2], kq[3], kq[4]);
    }
    return 0;
}
