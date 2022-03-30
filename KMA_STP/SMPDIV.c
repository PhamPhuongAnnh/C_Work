#include <stdio.h>

int main(void)
{
    //freopen("input.txt", "r", stdin);

    int  testcase,n,x,y;
    int i;
    scanf("%d", &testcase);
    for(i=0; i<testcase; i++)
    {
        scanf("%d%d%d", &n, &x, &y);
        int i;
        for(i = 1; i<n ; i++){
            if(i%x ==0){
                if(i%y!=0){
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}

