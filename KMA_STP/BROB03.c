#include <stdio.h>

int main(void)
{
    //freopen("d:\\input.txt", "r", stdin);
    int testcase,h,w,m,n;
    scanf("%d", &testcase);
    int i,j,t,p,k;
    for(t=0; t<testcase; t++){
        scanf("%d%d%d%d", &h,&w, &m, &n);
        int a[m][n], b[h][w];
        for(i =0; i<m; i++){
            for(j = 0; j<n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        int max = 0 ;
        for(i =0; i<=m-h; i++){
            for(j =0; j<=n-w; j++){
                    int tong = 0;
                for(p = i; p<i+h; p++){
                    for(k = j ; k<j +w; k++){
                            printf("%d ", a[p][k]);
                        if(a[p][k]%2 ==0 &&(p == i|| p== i+h-1|| k ==j|| k == j+w-1)){
                            tong+= a[p][k];
                        }

                    }
                    printf("\n");
                }
                printf("\n");
                if(tong>max){
                    max = tong;
                }
            }
        }
        printf("#%d %d\n", t+1, max);
    }
    return 0;
}
