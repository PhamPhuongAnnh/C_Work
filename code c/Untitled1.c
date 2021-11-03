

#include <stdio.h>
int max(int a, int b, int c)
{
    int max =a;
    if(max < b)
    {
        max =b;
    }
    if(max < c)
    {
        max =c;
    }
    return max;
}
int min(int a, int b, int c)
{
    int min =a;
    if(min> b)
    {
        min =b;
    }
    if(min > c)
    {
        min =c;
    }
    return min;
}
int luyThua(int a, int b)
{
    int LT = 1;
    for(int i=0; i<b; i++){
        LT *=a;
    }
    return LT;
}
int main()
{
    int a,b,c;
    printf("nhap 3 so: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Max = %d\n", max(a,b,c));
    printf("Min = %d\n", min(a,b,c));
    printf("Luy Thua = %d\n", luyThua(max(a,b,c), min(a,b,c)));
    return 0;
}
