
#include <stdio.h>
#include<string.h>
#define Max 205

int main()
{
    int col;
    char s[Max];
    do
    {
        scanf("%d", &col);
        if(col == 0){
            return 0;
        }
        gets(s);
        int len = strlen(s);

        char a[len/col][col];
        int k =0;
        for(int i=0; i<len/col; i++)
        {
            for(int j=0; j<col; j++)
            {
                a[i][j] = s[k];
                k++;
            }
        }
        for(int j=0; j<col; j++)
        {
            for(int i=0; i<len/col; i++)
            {

                if(i%2  == 0)
                {
                    printf("%c", a[i][j]);
                }
                else
                {
                    printf("%c", a[i][col-j-1]);
                }

            }

        }
        printf("\n");

    }
    while(col!=0);

    return 0;
}
