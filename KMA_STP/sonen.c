
#include <stdio.h>

int main(void)
{
    //freopen("input.txt", "r", stdin);

    int  testcase,n;
    int i;
    scanf("%d", &testcase);
    for(i=0; i<testcase; i++)
    {
        scanf("%d", &n);

        do
        {
            int s=0;
            while(n>0)
            {
                s += n%10;
                n/=10;
            }
            n = s;

        }
        while(n>=10);
        printf("#%d %d\n", i+1, n);
    }

    return 0;
}
