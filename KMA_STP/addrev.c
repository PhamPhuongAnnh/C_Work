#include <stdio.h>

int daoNguoc(int  n)
{
    int s = 0;
    while(n>0)
    {
        int  tem = n%10;
        s = s*10+tem;
        n/=10;
    }
    return s;
}
int main(void)
{
    //freopen("input.txt", "r", stdin);

    int  testcase,n,m;
    int i;
    scanf("%d", &testcase);
    for(i=0; i<testcase; i++)
    {
        scanf("%d%d", &n, &m);
        n = daoNguoc(n);
        m = daoNguoc(m);
        int s = n+m;
        s = daoNguoc(s);
        printf("%d\n", s);
    }

    return 0;
}
