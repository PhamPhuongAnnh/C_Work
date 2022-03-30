#include <stdio.h>

int main(void)
{
    int t,x,y;
    scanf("%d", &t);
    int i;
    for(i = 0; i<t; i++)
    {
        scanf("%d%d",&x,&y);

        if(x%2 == 0 && y%2==0 && x>=y && y>=(x-2))
        {
            printf("%d\n", (x+y));
        }
        else if(x%2!=0 && y%2!=0 && x>=y && y>=(x-2))
        {
            printf("%d\n", (x+y-1));
        }
        else
        {
            printf("No Number\n");
        }
    }

    return 0;
}
