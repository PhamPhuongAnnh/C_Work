#include<stdio.h>


int main()
{
    freopen("D:\\input.txt","r", stdin);
    int x;
    do
    {
        scanf("%d", &x);
        if(x == 42)
        {
            break;
        }
        else
        {
            printf("%d\n", x);
        }
    }
    while(x!=42);
    return 0;
}
