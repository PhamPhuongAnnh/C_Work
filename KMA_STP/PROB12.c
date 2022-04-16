
#include <stdio.h>
#include <math.h>
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int quayPhai(int huong)
{
    return (huong+1)%4;
}
int quayTrai(int huong)
{
    return (huong+3)%4;
}
int tiepTuc(int huong)
{
    return huong;
}
int quayNguoc(int huong)
{
    return (huong+2)%4;
}
typedef struct
{
    int x,y;
} toado;

double khoangCach(toado A, toado B){
    double kc;
    kc = (B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y);
    kc = sqrt(kc);
    return kc;
}
int main(void)
{
    //  freopen("d://input.txt", "r", stdin);
    int testcase,t, i, j;
    scanf("%d",&testcase);
    for(t=1; t<=testcase; t++)
    {
        toado kq;
        int k;
        scanf("%d%d%d\n", &kq.x,&kq.y,&k);
        char a[k], b[k];
        for(i =0; i<k; i++)
        {
            scanf("%c ", &a[i]);
        }
        for(i =0; i<k; i++)
        {
            scanf("%c ", &b[i]);
        }

         for(i =0; i<k; i++)
        {
            printf("%c ", a[i]);
        }

        int huongA = 1, huongB =1;
        toado A;
        toado B;
        A.x = 0, A.y =0, B.x = 0, B.y = 0;
        for(i =0; i<k; i++)
        {
            if(a[i] == 'N')
            {
                huongA =1;

            }
            else if(a[i] == 'W')
            {
                huongA =0;
            }
            else if(a[i] == 'E')
            {
                huongA =2;
            }
            else  if(a[i] == 'S')
            {
                huongA =3;
            }
            else if(a[i] == 'L')
            {
                huongA =quayTrai(huongA);
            }
            else if(a[i] == 'R')
            {
                huongA =quayPhai(huongA);
            }
            else if(a[i] == 'C')
            {
                huongA =tiepTuc(huongA);
            }
            else
            {
                huongA = quayNguoc(huongA);
            }
            if(b[i] == 'N')
            {
                huongB =1;

            }
            else if(b[i] == 'W')
            {
                huongB =0;
            }
            else if(b[i] == 'E')
            {
                huongB =2;
            }
            else  if(b[i] == 'S')
            {
                huongB =3;
            }
            else if(b[i] == 'L')
            {
                huongB =quayTrai(huongB);
            }
            else if(b[i] == 'R')
            {
                huongB =quayPhai(huongB);
            }
            else if(b[i] == 'C')
            {
                huongB =tiepTuc(huongB);
            }
            else
            {
                huongB = quayNguoc(huongB);
            }
             A.x+= dx[huongA];
             A.y +=dy[huongA];
             B.x+= dx[huongB];
             B.y +=dy[huongB];
        }

        if(A.x == B.x == kq.x && A.y == B.y == kq.y){
            printf("#%d Good game!\n", t);

        }
        else if(A.x == kq.x && A.y== kq.y){
             printf("#%d Team A win\n", t);
        }
         else if(B.x == kq.x && B.y== kq.y){
             printf("#%d Team B win\n", t);
        }
        else{
             printf("#%d %.3f %.3f\n", t, khoangCach(A,kq), khoangCach(B,kq));
        }
    }
    return 0;
}
