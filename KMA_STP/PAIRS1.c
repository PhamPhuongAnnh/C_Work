#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int main(void)
{
    int n,k, dem =0;
    scanf("%d%d", &n, &k);
    int a[n];
    int i, j,tg;
    for(i =0 ; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(a[j]> (a[i]+ k)){
                break;
            }
            if(a[i] +k == a[j])
            {
                dem++;
                break;
            }
        }
    }
    printf("%d", dem);


    return 0;
}
