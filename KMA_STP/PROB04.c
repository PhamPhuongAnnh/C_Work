
#include <stdio.h>

int main(void)
{

    int testcase;
    int r, c;
    int i, t,j, flag;
    scanf("%d", &testcase);
    for(t=0; t<testcase; t++)
    {
        int hang =0, cot =0;
        scanf("%d%d\n", &r,&c);
        char a[r][c];
        for(i = 0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%c ", &a[i][j]);
            }
        }

        for(i = 0; i<r; i++)
        {
            flag = 0;
            for(j=0; j<c; j++)
            {
                if(a[i][j] == '1')
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                hang++;
            }
        }

        for(i = 0; i<c; i++)
        {
            flag = 0;
            for(j=0; j<r; j++)
            {
                if(a[j][i] == '1')
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                cot++;
            }
        }


        printf("#%d %d\n", t+1, (hang*c + r*cot) - (hang*cot)) ;

    }

    return 0;
}
