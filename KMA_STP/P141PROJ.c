#include <stdio.h>

int main(void)
{
    //freopen("d:\\input.txt", "r", stdin);
// input
    int i, j, m,n;
    char a[4][4];
    for(i=0; i<4; i++)
    {
        for(j =0; j<4; j++)
        {
            scanf("%c\n", &a[i][j]);
        }
    }
    int flag  =0,dem1, dem2;
    for(i=0; i<3; i++)
    {
        for(j =0; j<3; j++)
        {
             dem1 = 0, dem2 = 0;
             for(m = i; m<i+2; m++){
                for(n =j; n<j+2; n++){
                    if(a[m][n] == '#'){
                        dem1++;
                    }
                    if(a[m][n] == '.'){
                        dem2++;
                    }
                }
             }
             if(dem1 == 3|| dem2 == 3 || dem1 == 1 || dem2 ==1|| dem1 == 0 || dem2==0){
                flag = 1;
                break;
             }
        }

    }

    if(flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
