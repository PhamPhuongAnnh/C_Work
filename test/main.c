#include <stdio.h>
#include <stdlib.h>

int main()
{
//    #ifndef ONLINE_JUDGE
//    freopen("F:\\input.txt", "r", stdin);
//    #endif
    int t, m, n;
    int c, r;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &m, &n);
        for(r=0; r<m; r++)
        {
            for(c=0; c<n; c++)
                if(r==0 || r==m-1 || c==0 || c==n-1)
                    printf("*");
                 else
                    printf(" ");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
