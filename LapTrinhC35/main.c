#include <stdio.h>
#include <string.h>
char chuoi[1001],phantu[1002];
int dem,len,dem1,len1,k,max,i,j;
int main()
{
    gets(chuoi);
    len=strlen(chuoi);
    max=1;
    dem=0;
    for (i=1;i<=len;i++)
    {
        len1=len-i;
        for (j=0;j<=len1;j++)
        {
            phantu[1001]=1;
            for (k=0;k<i/2;k++)
            {
                if (chuoi[k+j]!=chuoi[j+i-k-1])
                {
                    phantu[1001]=0;
                    break;
                }
            }
            if (phantu[1001]==1&& max!=i){
                max=i;
                dem=0;
                phantu[dem]=j;
                dem++;
                }
                else if (phantu[1001]==1&& max==i)
                {
                    phantu[dem]=j;
                    dem++;
                }
        }
    }
    printf("%d\n",max);
    for (i=0;i<dem;i++)
    {
        for (k=0;k<max;k++)
        {
            printf("%c",chuoi[phantu[i]+k]);
        }
        printf("\n");
    }
    return 0;
}
