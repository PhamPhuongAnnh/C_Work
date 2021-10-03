
#include <stdio.h>

int tachSo(int n)
{
    if(n<100){
        return 0;
    }
    if(n>=100 && n<=999)
    {
        return n/100;
    }
    if(n>=1000 && n<9999)
    {
        return (n%1000)/100;
    }
    if(n>=10000 && n<=99999)
    {
        return ((n%10000)%1000)/100;
    }
}
int main()
{
    int n,m,p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    n = tachSo(n);
    m = tachSo(m);
    p = tachSo(p);

    if(n>m){
        printf("No");
    }
    else if(m>p){
        printf("No");
    }
    else if(n>p){
        printf("No");
    }
    else {
        printf("Yes");
    }
}
