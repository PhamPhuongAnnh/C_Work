#include <stdio.h>
//TABE003
int main()
{
    int a;
    unsigned int b;
    scanf("%d%d", &a, &b);
    printf("%d\n",a);
    printf("%u",b);
    return 0;
}

//TABE004
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long a;
    int da;
    unsigned long long b;
    int db;
    scanf("%lld %d", &a, &da);
    scanf("%llu %d", &b, &db);
    printf("a = %*lld\n",da, a);
    printf("b = %*llu",db, b);
    return 0;
}


//TABE005
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n", (x+y));
    printf("%d", (x-y));
    return 0;
}

//TABE006
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d", a, b, a%b);

    return 0;
}

//TABE007
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,d1,d2;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &d1, &d2);
    printf("%d : %d = %*.*f",a,b,d1,d2,(float)a/b);

    return 0;
}


//TABE008
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned int a;
    scanf("%u", &a);

    printf("0x%08x",a);

    return 0;
}

//TABE009
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int a;
    scanf("%x", &a);
    printf("0x%x = %u", a, a);
    return 0;
}

//TABE010
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%0.5f", a);
    return 0;
}

//TABE011
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a;
    scanf("%lf", &a);
    int d1,d2;
    scanf("%d %d", &d1, &d2);
    printf("a = %*.*f", d1, d2, a);
    return 0;
}

//TABE012
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("a   = %10.3f\n", a);
    printf("b   = %10.3f\n", b);
    printf("a+b = %10.3f\n", a+b);
    printf("a-b = %10.3f\n", a-b);
    printf("a*b = %10.3f\n", a*b);
    printf("a/b = %10.3f\n", a/b);

    return 0;
}

//TABE013
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a,b;
    int d1,d2;
    scanf("%lf%lf", &a,&b);
    scanf("%d%d", &d1, &d2);
    printf("(%*.*lf) + (%*.*lf) = %*.*lf\n", d1, d2, a, d1, d2, b, d1, d2, a+b);
    printf("(%*.*lf) - (%*.*lf) = %*.*lf\n", d1, d2, a, d1, d2, b, d1, d2, a-b);
    printf("(%*.*lf) * (%*.*lf) = %*.*lf\n", d1, d2, a, d1, d2, b, d1, d2, a*b);
    printf("(%*.*lf) / (%*.*lf) = %*.*lf\n", d1, d2, a, d1, d2, b, d1, d2, a/b);


    return 0;
}

//TABE014
#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    scanf("%f", &x);
    if(x<0)
    {
        printf("%.4f",sqrt(-x));
    }
    else
        printf("%.4f",sqrt(x));
    return 0;
}

//TABE015
#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int a;
    scanf("%f", &x);
    a = round(x);
    printf("%d",a);
    return 0;
}

//TABE016
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%f",&a);
    float c = round(a*10)/10;
    printf("%.2f", c*c);
    return 0;
}

//TABE017
#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    scanf("%f", &x);
    int a = (int) x;
    printf("%d", a);
    return 0;
}

//TABE018
#include <stdio.h>
#include <math.h>
int main()
{
    char x;
    scanf("%c", &x);
    printf("%d",x);
    return 0;
}

//TABE019
#include <stdio.h>
#include <math.h>
int main()
{
    char x;
    scanf("%c", &x);
    printf("%c",(x-32));
    return 0;
}

//TABE020
#include <stdio.h>
#include <math.h>
int main()
{
    char x;
    scanf("%c", &x);
    printf("%d",(x-97));
    return 0;
}

//TABE021
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    char x;
    int k;
    scanf("%c %d", &x, &k);
    printf("%c",((x-65)+k+26)%26+65);
    return 0;
}

//TABE022
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    char x;
    int k;
    scanf("%c %d", &x, &k);
    printf("%c",((x-65)-k+26)%26+65);
    return 0;
}

//TABE023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, n;
    scanf("%u %u", &a, &n);

    if((a>>n)&1==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

//TABE024
#include <stdio.h>

int main(void)
{
    unsigned int x,n,b;
    int a=1,i;
    scanf("%u %u",&x,&n);
    b=x;
    x=x<<(31-n);
    x=x>>31;
    if(x==0)
    {
        for(i=0; i<n; i++)
        {
            a=a*2;
        }
        printf("%u",b+a);
    }
    else
    {
        printf("%u",b);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    unsigned int x,n;
    scanf("%u %u",&x,&n);
    printf("%u",x|1<<n);
    return 0;
}


//TABE025
#include <stdio.h>
#include <stdlib.h>

int main()
{
//	#ifndef ONLINE_JUDGE
//    freopen("F:\\input.txt","r",stdin);
//    #endif
    unsigned long x,temp;
    unsigned int n,dem;
    scanf("%lu %u", &x,&n);
    temp=x;
    for(int i=0; i<n; i++)
    {
        x/=2;
    }
    if(x%2!=0)
    {
        unsigned long kq = temp - pow(2,n);
        printf("%lu",kq);
    }
    else
    {
        printf("%lu",temp);
    }
    return 0;
}

//TABE026
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, n, x;
    scanf("%d %d", &b, &n);
    if(b==1)
    {
        printf("%x", ~0);
    }
    else
    {
        x=1<<n;
        x=~x;
        printf("%x",x);
    }


    return 0;
}

//TABE027
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b, n;
    scanf("%d %d %d", &x, &n,&b);
    printf("%08x\n",x);
    if(b==0)
    {
        x=x&(~(1<<n));
        printf("%08x",x);
    }

    else
    {
        x=x|(1<<n);
        printf("%08x",x);
    }
    return 0;
}

//TABE028
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,n;
    scanf("%u %u",&x, &n);
    printf("x = %u = 0x%08x\n",x,x);
    printf("x >> %u = %u = 0x%08x\n",n,x>>n, x>>n);
    printf("x << %u = %u = 0x%08x\n",n,x<<n, x<<n);
    return 0;
}

//TABE029
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,n;
    scanf("%u %u",&x, &n);
    printf("x = %u = 0x%08x\n",x,x);
    printf("x >> %u = %u = 0x%08x\n",n,(x>>n)|(x<<32-n), (x>>n)|(x<<32-n));
    printf("x << %u = %u = 0x%08x\n",n,(x<<n)|(x>>32-n), x<<n|(x>>32-n));
    return 0;
}

//TABE030
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    unsigned int a,b;
    scanf("%d %d", &a, &b);
    float x =(float) a/b;
    if(x>1)
    {
        printf("1");
    }
    else printf("0");
    return 0;
}



//TABE032
//TABE033
#include <stdio.h>
int main ()
{
    unsigned int a,b;
    unsigned int x=0;
    scanf("%x",&a);
    printf("0x%08x ~ %10u\n",a,a);
    for(int i=0; i<4; i++)
    {
        b = (a<<(32-8))>>(8*i);
        x = b|x;
        a = a>>8;
    }
    printf("0x%08x ~ %10u",x,x);
}

//TABE034
#include <stdio.h>

int main()
{
    unsigned int a,b;
    unsigned int x=0;
    scanf("%x",&a);
    printf("0x%0.8x ~ %10u\n", a,a);
    for(int i=0; i<8; i++)
    {
        b=(a<<(32-4))>>(4*i);
        x=b|x;
        a=a>>4;
    }
    printf("0x%0.8x ~ %10u", x,x);
    return 0;
}

//TABE035
#include <stdio.h>

int main()
{
    unsigned int a,b;
    scanf("%u",&a);
    printf("x = %u = 0x%X\n", a,a);
    for(int i=0; i<4; i++)
    {
        b=(a<<(32-8))>>(32-8);
        a=a>>8;
        printf("byte %d: 0x%X = %d\n",i, b,b);
    }

    return 0;
}

//TABE036
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    unsigned int x;
    scanf("%u", &x);
    printf("x = %x = %u\n",x,x);
    for(int i=0; i<8; i++ )
    {
        int d = x%16;
        printf("%d: %x = %d\n",i,d,d);
        x/=16;
    }
    return 0;
}

//===========================================================================================4
// TADE001
#include <stdio.h>

int main ()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d la so chan",a);

    }
    else
    {
        printf("%d la so le",a);

    }
    return 0;
}

// TADE002
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double x;
    scanf("%lf", &x);
    if(x<0)
    {
        printf("%.3lf la so am",x);
    }
    else if(x>0)
    {
        printf("%.3lf la so duong",x);
    }
    else printf("bang 0");
    return 0;
}

// TADE003
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b;
    scanf("%lf %lf", &a, &b);
    if(a<0 && b<0 || a>0 && b>0)
    {
        printf("Cung dau");
    }
    else if(a>0 && b<0 || a<0 && b>0)
    {
        printf("Trai dau");
    }
    else printf("khong so sanh duoc");
    return 0;
}

// TADE004
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<0)
    {
        printf("|a| = %d\n",-a);
    }
    else printf("|a| = %d\n",a);
    if(b<0)
    {
        printf("|b| = %d\n",-b);
    }
    else printf("|b| = %d\n",b);
    if(c<0)
    {
        printf("|c| = %d\n",-c);
    }
    else printf("|c| = %d\n",c);

    return 0;
}

// TADE005
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b;
    scanf("%lf %lf", &a, &b);
    if(a<b)
    {
        printf("a < b");
    }
    else if(a>b)
    {
        printf("a > b");
    }
    else printf("a = b");
    return 0;
}

// TADE006
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    int max = a;
    if(max <b)
    {
        max =b;
    }
    if(max <c)
    {
        max = c;
    }
    printf("max{%d, %d, %d} = %d",a,b,c,max);
    return 0;
}



// TADE007
#include <stdio.h>
#include <stdlib.h>

int main()

{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b)
    {
        double  tg =a;
        a=b;
        b = tg;
    }
    if(a>c)
    {
        double tg =a;
        a=c;
        c = tg;
    }
    if(b>c)
    {
        double tg =b;
        b=c;
        c = tg;
    }
    printf("%.2lf --> %.2lf --> %.2lf",a,b,c);
    return 0;
}


// TADE008
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
    case 2:
        printf("Thu Hai");
        break;
    case 3:
        printf("Thu Ba");
        break;
    case 4:
        printf("Thu Tu");
        break;
    case 5:
        printf("Thu Nam");
        break;
    case 6:
        printf("Thu Sau");
        break;
    case 7:
        printf("Thu Bay");
        break;

    case 8:
        printf("Chu Nhat");
        break;
    default:
        printf("Khong hop le");
    }
    return 0;
}


// TADE010
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b;
    scanf("%lf %lf", &a, &b);
    if(a==0)
    {
        if(b==0)
        {
            printf("Moi x la nghiem");
        }
        else printf("Vo nghiem");
    }
    else printf("%.5lf",-(b/a));

    return 0;
}



// TADE011
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a==0)
    {
        if (b==0 && c!=0)
            printf("Phuong trinh vo nghiem");
        else if (b==0 && c==0)
            printf("Moi x la nghiem");
        else
            printf("Phuong trinh co 1 nghiem don\nx = %.5lf",-c/b);
    }
    else
    {
        double denta = b*b-4*a*c;
        if (denta == 0)
        {
            printf("Phuong trinh co nghiem kep\n");
            printf("x1 = x2 = %.5lf\n",-b/(2*a));
        }


        else if (denta > 0)
        {
            denta = sqrt(denta);
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.5lf\n",(-b-denta)/(2*a));
            printf("x2 = %.5lf\n",(-b+denta)/(2*a));
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }

    }
    return 0;
}


// TADE012
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b,e,c,d,f,y,x;
    scanf("%lf %lf %lf",&a, &b, &e);
    scanf("%lf %lf %lf",&c, &d, &f);
    double D,Dx,Dy;
    D = a*d - c*b;
    Dx = e*d - f*b;
    Dy = a*f - c*e;
    if (D == 0)
    {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.5lf\n",x);
        printf("y = %.5lf\n",y);

    }
    return 0;

}


// TADE013
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double s,t;
    scanf("%lf", &s);
    if(s<=0.8)
    {
        t=10000;
    }
    else if(s<=30)
    {
        t=10000+(s-0.8)*11000;
    }
    else
    {
        t=10000+ 30*11000 + (s-30.8)*10000;
    }
    int a=round(t/1000)*1000;
    printf("%d", a);
    return 0;
}


// TADE014
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double x,s;
    scanf("%lf", &x);
    if(x>5 || x == 5)
    {
        s = 2*x*x + 5*x + 9;
        printf("f(%.3lf) = %.3lf",x,s);
    }
    else
    {
        s = -2*x*x + 4*x -9;
        printf("f(%.3lf) = %.3lf",x,s);
    }
    return 0;

}


// TADE015
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d",&m);
    switch (m)
    {
    case 1:
    case 2:
    case 3:
        printf("Thang %d thuoc Quy I",m);
        break;
    case 4:
    case 5:
    case 6:
        printf("Thang %d thuoc Quy II",m);
        break;
    case 7:
    case 8:
    case 9:
        printf("Thang %d thuoc Quy III",m);
        break;
    case 10:
    case 11:
    case 12:
        printf("Thang %d thuoc Quy IV",m);
        break;
    default:
        printf ("Trong nam khong co thang %d",m);
    }

    return 0;
}


// TADE016
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    unsigned int x;
    scanf ("%u", &x);
    if(x%400 == 0 || x%4==0 && x%100!=0)
    {
        printf("Nam %u la nam nhuan",x);

    }
    else printf("Nam %u khong phai la nam nhuan",x);
    return 0;

}


// TADE017
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int d, m, y;
    scanf("%d%d%d",&d,&m,&y);
    if(y>0)
    {
        switch(m)
        {
        case 1:
        case 3:
        case 5:
        case 7: // thang 7 co 31 ngay nhe
        case 8 :
        case 10:
        case 12:

            if (d>0&&d<=31)
            {
                printf("%d/%d/%d: hop le",d,m,y);
            }
            else
            {
                printf("%d/%d/%d: khong hop le",d,m,y);
            }
            break;
        case 2:
            if ((y%4==0) && (y%100!=0) || y%400 == 0)
            {
                if(d>0&&d<=29)
                {
                    printf("%d/%d/%d: hop le",d,m,y);
                }
                else
                {
                    printf("%d/%d/%d: khong hop le",d,m,y);
                }
            }
            else
            {
                if(d>0&&d<=28)
                {
                    printf("%d/%d/%d: hop le",d,m,y);
                }
                else
                {
                    printf("%d/%d/%d: khong hop le",d,m,y);
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(d>0&&d<=30)
            {
                printf("%d/%d/%d: hop le",d,m,y);
            }
            else
            {
                printf("%d/%d/%d: khong hop le",d,m,y);
            }
            break;
        default:
            printf("%d/%d/%d: khong hop le",d,m,y);
        }
    }
    else printf("%d/%d/%d: khong hop le",d,m,y);

}


// TADE018
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
void ngayKeTiep(date p)
{
    if(p.m==1||p.m==3||p.m==5||p.m==7||p.m==8||p.m==10||p.m==12)
    {
        if(p.d==31)
        {
            if(p.m==12)
            {
                p.d=1;
                p.m=1;
                p.y++;
            }
            else
            {
                p.d=1;
                p.m++;
            }
        }
        else if(p.d>0&&p.d<31)
        {
            p.d++;
        }
        else return;
    }
    else if(p.m==4||p.m==6||p.m==9||p.m==11)
    {
        if(p.d==30)
        {
            p.d=1;
            p.m++;
        }
        else if(p.d>0&&p.d<30)
        {
            p.d++;
        }
        else return;
    }
    else if(p.m==2)
    {
        if((p.y % 400 ==0 || (p.y % 100 != 0 && p.y % 4 == 0)))
        {
            if(p.d==29)
            {
                p.d=1;
                p.m++;
            }
            else if(p.d>0&&p.d<29)
            {
                p.d++;
            }
            else return;
        }
        else
        {
            if(p.d==28)
            {
                p.d=1;
                p.m++;
            }
            else if(p.d>0&&p.d<28)
            {
                p.d++;
            }
            else return;
        }
    }
    printf("Ngay ke tiep: %d/%d/%d\n",p.d, p.m, p.y);
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{


    date p;

    nhap(&p);
    printf("Ngay hien tai: %d/%d/%d\n",p.d, p.m, p.y);
    ngayKeTiep(p);

    return 0;
}


// TADE019
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
void ngayLienTruoc(date p)
{
    if(p.m==1||p.m==5||p.m==7||p.m==8||p.m==10||p.m==12)
    {
        if(p.d==1)
        {
            if(p.m==1)
            {
                p.d=31;
                p.m=12;
                p.y--;
            }
            else if(p.m==8)
            {
                p.d=31;
                p.m--;
            }
            else
            {
                p.d = 30;
                p.m--;
            }

        }
        else if(p.d>1&&p.d<=31)
        {
            p.d--;
        }
        else return;
    }
    else if(p.m==2||p.m==4||p.m==6||p.m==9||p.m==11)
    {
        if(p.d==1)
        {
            p.d=31;
            p.m--;
        }
        else if(p.d>1&&p.d<=30)
        {
            p.d--;
        }
        else return;
    }
    else if(p.m==3)
    {
        if((p.y % 400 ==0 || (p.y % 100 != 0 && p.y % 4 == 0)))
        {
            if(p.d==1)
            {
                p.d=29;
                p.m--;
            }
            else if(p.d>1&&p.d<=29)
            {
                p.d--;
            }
            else return;
        }
        else
        {
            if(p.d==1)
            {
                p.d=28;
                p.m--;
            }
            else if(p.d>1&&p.d<=28)
            {
                p.d--;
            }
            else return;
        }
    }
    printf("Ngay truoc do: %d/%d/%d\n",p.d, p.m, p.y);
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{


    date p;

    nhap(&p);
    printf("Ngay hien tai: %d/%d/%d\n",p.d, p.m, p.y);
    ngayLienTruoc(p);

    return 0;
}


// TADE020
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int d,m,y,s;
    scanf("%d %d %d",&d,&m,&y);
    s= d;
    for(int i=1; i<m; i++)
    {
        switch(i)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            s+=30;
            break;
        case 2:
            if(y%4==0 && y%100!=0 || y%400==0)
            {
                s+=29;
            }
            else s+=28;
            break;
        default:
            s+=31;
        }
    }
    printf("Ngay %d/%d la ngay thu %d cua nam %d",d,m,s,y);
    return 0;
}




// TADE021
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("%.2lf, %.2lf, %.2lf khong the la 3 canh cua tam giac",a,b,c);
    }
    else
    {
        printf("%.2lf, %.2lf, %.2lf co the la 3 canh cua tam giac",a,b,c);
    }
    return 0;

}


// TADE022
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("Khong");
    }
    else
    {
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("Co");
        }
        else printf("Khong");
    }
    return 0;

}


// TADE023
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, n;
    scanf("%u %u", &a, &n);

    if((a>>n)&1==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

// TADE024
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("(%0.5f, %0.5f, %0.5f) khong phia la tam giac",a,b,c);
    }
    else
    {
        if(a==b&&b==c&&a==c)
            printf("(%0.5f, %0.5f, %0.5f) la tam giac deu",a,b,c);
        else if(a==b||b==c||a==c)
            printf("(%0.5f, %0.5f, %0.5f) la tam giac can",a,b,c);
        else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("(%0.5f, %0.5f, %0.5f) la tam giac vuong",a,b,c);
        else
            printf("(%0.5f, %0.5f, %0.5f) la tam giac thuong",a,b,c);
    }
    return 0;
}



// TADE025
#include <stdio.h>
int main()
{
    int xH,xM, yH,yM;
    scanf("%d %d",&xH,&yH);
    scanf("%d %d",&xM,&yM);
    if ((xH==xM||yH==yM)||xM-yM==xH-yH||xM+yM==xH+yH)
    {
        printf("Hau an duoc ma\n");
    }
    else
    {
        printf("Hau khong an duoc ma\n");
    }
    if ( (xM-xH) * (yM-yH) == 2 || (xM-xH) * (yM-yH) == -2)
    {
        printf("Ma an duoc hau");
    }
    else
    {
        printf("Ma khong an duoc hau");

    }

    return 0;
}

// TADE026
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a;
    scanf("%u", &a);
    int sqr = sqrt(a);
    if(sqr*sqr == a)
    {
        printf("Co");
    }
    else
    {
        printf("Khong");
    }
    return 0 ;
}
//=================================================================================================
//TALO_001
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned int i,n;
    double s=0;
    scanf("%u",&n);
    for ( i=1; i<=n; i++)
    {
        s += (double) 1/i;
    }
    printf("%.10lf",s);
    return 0;
}

//TALO_002
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned int i,n;
    double s=0, daiThua = 1;
    scanf("%u",&n);
    for ( i=1; i<=n; i++)
    {

        daiThua*=i;
        s += (double) 1/daiThua;
    }
    printf("%.10lf",s);
    return 0;
}



//TALO_003
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned int i,n;
    double s=0;
    scanf("%u",&n);
    for ( i=1; i<=2*n; i++)
    {

        if(i%2==0)
        {
            s -=(double) 1/i;
        }
        else s +=(double) 1/i;
    }
    printf("%.13lf",s);
    return 0;
}



//TALO_004
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned int i,n;
    double s=0, daiThua = 1;
    scanf("%u",&n);
    for ( i=1; i<=2*n; i++)
    {
        daiThua*=i;
        if(i%2==0)
        {
            s -=(double) 1/daiThua;
        }
        else s +=(double) 1/daiThua;
    }
    printf("%.13lf",s);
    return 0;
}



//TALO_005
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main ()
{
    double n;
    double s = 0;
    do
    {
        scanf("%lf", &n);
        s += n;
    }
    while(n!=0);
    printf("%.3lf",s);
    return 0;
}



//TALO_006
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main ()
{
    unsigned int n;
    do
    {
        scanf("%u", &n);
        if(n!=0)
        {
            printf("0x%08x\n",n);
        }
    }
    while(n!=0);
    return 0;
}



//TALO_007
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned int i,n;
    scanf("%u",&n);
    int a[100];
    for ( i=1; i<=n; i++)
    {
        scanf("%u",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        printf("%u = 0x%08x\n",a[i],a[i]);
    }
    return 0;
}



//TALO_008
#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
#endif
    int n;
    unsigned int x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        printf("%d = ",x);
        for(int j = 31; j >= 0; j--)
        {
            printf("%d",(x>>j)&1);

        }
        printf("\n");
    }
    return 0;
}

//TALO_009
#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
#endif // ONLINE_JUDGE
    int n;
    unsigned int x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        printf("%9u = 0x%08x = ",x,x);
        for(int j = 31; j >= 0; j--)
        {
            printf("%d",(x>>j)&1);
            if(j % 4 == 0 && j != 0)
                printf(".");

        }
        printf("\n");
    }
    return 0;
}

//TALO_010
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        printf("*");
    }
    return 0;
}



//TALO_011
#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r", stdin);
#endif
    int t, m, n;
    int c, r;
    scanf("%d", &t);
    while(t--)
    {
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

//TALO_012
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a;
    scanf("%d", &t);
    int r, c;
    while(t--)
    {
        scanf("%d", &a);
        for(r=0; r<a; r++)
        {
            for(c=0; c<a; c++)
                if(r==0 || r==a-1 || c==0 ||c==a-1 ||r==c)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_013
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a;
    scanf("%d", &t);
    int r, c;
    while(t--)
    {
        scanf("%d", &a);
        for(r=0; r<a; r++)
        {
            for(c=0; c<a; c++)
                if(r==0 || r==a-1 || c==0 ||c==a-1 ||r+c==a-1)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_014
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a;
    scanf("%d", &t);
    int r, c;
    while(t--)
    {
        scanf("%d", &a);
        for(r=0; r<a; r++)
        {
            for(c=0; c<a; c++)
                if(r==0 || r==a-1 || c==0 ||c==a-1 ||r+c==a-1 || r==c)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_015
#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input", "r", stdin);
#endif

    int t, r, c,i,j;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &r, &c);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if((i%2==0&&j%2==0)||(i%2!=0 && j%2!=0))
                    printf("*");
                else
                    printf(".");

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_016
#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
#endif
    int t, r, c,i,j;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &r, &c);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(i==0 || j==0||i==r-1 || j==c-1)
                    printf("*");
                else
                    printf(".");

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_017
#include <stdio.h>

int main()
{
    int k,i,j,n,A[100],B[100];
    scanf("%d",&n);
    for(k=0; k<n; k++)
        scanf("%d %d",&A[k],&B[k]);
    for(k=0; k<n; k++)
    {
        for(i=0; i<3*A[k]+1; i++)
        {
            for (j=0; j<3*B[k]+1; j++)
            {
                if ((i%3)==0) printf("*");
                else if ((j%3)==0) printf("*");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_018
#include <stdio.h>

int main()
{
    int k,i,j,n,A[100],B[100],C[100],D[100];
    scanf("%d",&n);
    for(k=0; k<n; k++)
        scanf("%d %d %d %d",&A[k],&B[k],&C[k],&D[k]);
    for(k=0; k<n; k++)
    {
        for(i=0; i< (C[k]+1)*A[k]  +1; i++)
        {
            for (j=0; j< (D[k]+1)*B[k] +1; j++)
            {
                if ((i%(C[k]+1))==0) printf("*");
                else if ((j%(D[k]+1))==0) printf("*");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//TALO_019
#include <stdio.h>
#include<math.h>

int H[100],D[100],S[100],h,d,i,j,n=0,s=0,k=0;

int main()
{

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d%d%d",&H[i],&D[i],&S[i]);

    for ( k=0 ; k<n ; k++ )
    {
        for ( i=0 ; i <= H[k] * (S[k]+1) ; i++ )
        {
            for( j=0 ; j <= D[k] * (S[k]+1) ; j++ )
            {
                if ( i%(S[k]+1) == 0 || j %(S[k]+1) == 0 )
                    printf("*");
                else if ( abs(i-j) == abs( (S[k]+1) * ( i/(S[k]+1) - j/(S[k]+1) ) ) && ( i/(S[k]+1) + j/(S[k]+1) )%2 == 0  )
                    printf("%c",92);
                else if ( (i+j) == ( (S[k]+1) * (abs( i/(S[k]+1) + j/(S[k]+1) ) + 1 ) ) && ( i/(S[k]+1) + j/(S[k]+1) )%2 == 1 )
                    printf("/");
                else
                    printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
}

//TALO_020
//TALO_021
//TALO_022
//TALO_023
#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r", stdin);
#endif
    int x, i, am, duong,n;
    scanf("%d",&n);
    for (int j = 1; j<=n; j++)
    {
        am = 0;
        duong =0;
        while (1)
        {
            scanf("%d ",&x);
            if (x!=0)
            {
                if (x>0)
                {
                    duong=duong+x;
                }
                if (x<0)
                {
                    am=am+x;
                }
            }
            else break;
        }
        printf("NegativeSum = %6d;     PositiveSum = %6d\n",am,duong);
    }
    return 0;
}

//TALO_024
#include <stdio.h>
#include<math.h>
double max(double a[], int n)
{
    double max = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}
double min(double a[], int n)
{
    double min = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{

    int t,n;
    double a[100];
    scanf ("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%lf", &a[i]);
        }
        printf("Min = %15.3lf;     Max = %15.3lf\n",min(a,n),max(a,n));
    }

    return 0;
}

//TALO_025
#include <stdio.h>
#include <stdlib.h>
void fibo(int n)
{
    int i, f0=0, f1=1, fn;
    for(i=0; i<=n; i++)
    {
        if(i==0 || i==1)
            fn = 1;
        else
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }
    printf("%d\n", fn);
}
int main()
{
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        fibo(n);
    }
    return 0;
}

//TALO_026
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d",a);
    return 0;
}

//TALO_027
#include <stdio.h>
#include <stdlib.h>

int uoc(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int t;
    int x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        int c = (x/uoc(x,y))*y;
        printf("LCM(%5d, %5d) = %5d\n", x,y,c);
    }
    return 0;
}

//TALO_028
#include <stdio.h>
#include <math.h>
int main()
{
    int t,a1[100];
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0; i<t; i++)
    {
        int sqr = sqrt(a1[i]);
        if(sqr*sqr == a1[i])
        {
            printf("%5d : YES\n",a1[i]);
        }
        else
        {
            printf("%5d : NO\n",a1[i]);
        }
    }
    return 0 ;
}

//TALO_029
#include <stdio.h>
#include <math.h>
int kiemtrasonguyen(int n)
{
    if (n<2) return 0;
    if (n==2) return 1;
    if (n>2)
    {
        for (int i=2; i<=sqrt (n); i++)
            if (n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    unsigned int a1[100];
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%u",&a1[i]);
    }
    for(int i=0; i<t; i++)
    {
        if(kiemtrasonguyen(a1[i])==0)
        {
            printf("%5u : NO\n",a1[i]);
        }
        else
        {
            printf("%5u : YES\n",a1[i]);
        }
    }
    return 0 ;
}

//TALO_030
#include <stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r",stdin);
#endif
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        int dem;
        printf("%d = ",n);

        if(n>1)
        {
            for(int i = 2; i <= n; i++)
            {
                dem = 0;
                while(n % i == 0)
                {
                    ++dem;
                    n /= i;
                }

                if(dem)
                {
                    if(dem > 1)
                    {
                        for(int j=1; j<=dem; j++)
                        {
                            printf("%d",i);
                            if(j<dem)
                            {
                                printf(" x ");
                            }
                        }
                    }
                    else printf("%d", i);
                    if(n > i)
                    {
                        printf(" x ");
                    }
                }
            }
            printf("\n");
        }
        else
        {
            if(n == 1)
            {
                printf("%d\n",n);
            }
        }
    }

}
//TALO_035
#include <stdio.h>
#include <stdlib.h>
void tong(int x)
{
    int s  =0;
    for(int i = 1 ; i < x; i++)
    {
        if(x % i == 0)
        {
            s += i;
        }
    }
    printf("%u\n",s);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r",stdin);
#endif
    unsigned int t,x,s;
    scanf("%u",&t);
    while(t--)
    {
        s=0;
        scanf("%u",&x);
        tong(x);
    }
    return 0;

}

//TALO_036
#include <stdio.h>
#include <math.h>
int kiemtrasonguyen(int n)
{
    if(n<2 || (n>2 && n%2==0))
    {
        return 0;
    }

    int limit = (int)sqrt(n);
    int i;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}
int main()
{
    int a,b, i;
    scanf("%d %d", &a,&b);
    for(i=a; i<=b; i++)
    {
        if(kiemtrasonguyen(i)==1)
        {
            printf("%d\n",i);
        }
    }
    return 0 ;
}
////================================================================================================

//TAARR001
#include <stdio.h>
void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int kiemTra(int a[], int n, int m){
     for(int i=0; i<n; i++){
            if(a[i] == m ){
               return 1;
            }
        }
       return 0;
}
int main()
{
    int n, a[100],m;
    scanf("%d",&n);
    nhap(a,n);
    scanf("%d", &m);
    if(kiemTra(a,n,m)==1){
        printf("Yes");
    }
    else printf("No");
    return 0;
}

//TAARR002
#include <stdio.h>
void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int kiemTraSoLuong(int a[], int n, int m){
    int dem =0;
     for(int i=0; i<n; i++){
            if(a[i] == m ){
              dem++;
            }
        }
       return dem;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    scanf("%d", &m);
    printf("%d", kiemTraSoLuong(a,n,m));
    return 0;
}

//TAARR003
#include <stdio.h>
void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void viTri(int a[], int n, int m)
{
    printf("At the following position(s): ");
      for(int i=0; i<n; i++){
            if(a[i] == m ){
              printf("%d ",i);
            }
        }
}
void kiemTraSoLuong(int a[], int n, int m){
    int dem =0;
     for(int i=0; i<n; i++){
            if(a[i] == m ){
              dem++;
            }
        }
       if(dem==0){
        printf("The value %d does not exist in the given array",m);
        return;
       }
       else {
            printf("The value %d appears %d time(s)\n",m,dem);
            viTri(a,n,m);
       }
}

int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    scanf("%d", &m);
    kiemTraSoLuong(a,n,m);
    return 0;
}
//TAARR004
#include <stdio.h>
void nhap(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n,int m){
    int k=1;
    for(int i=0; i<n; i++){
        printf("%6d", a[i]);
        if(k == m){
            printf("\n");
            k = 0;
        }
        k++;
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    scanf("%d", &m);
    xuat(a,n,m);
    return 0;
}

//TAARR008
#include <stdio.h>

void nhap(int  a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
   for(int i=0; i<n; i++){
        printf("%5d", a[i]);
    }
}
void daoNguoc(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%5d", a[n-i-1]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a,n);
    xuat(a,n);
    printf("\n");
    daoNguoc(a,n);

    return 0;
}

//TAARR009
#include <stdio.h>
#include <stdlib.h>
// xin chao tat ca cac ban\
// sau day la bai lam chon loc phan tu mang tren spoj
// ham nhap phan tu mang
void nhap (double a[], unsigned int n)
{

 for(int i=0; i<n; i++){
    scanf ("%lf", &a[i]);
 }
}
// ham hien thi mang
void hienTHi(double a[], unsigned int n){
    for(int i=0; i<n; i++){
        printf ("%.2lf\t", a[i]);
    }
}
// ham tinh gia tri trung binh cua mang
double TB(double a[], unsigned int n){
    double s =0, TB =0;
    for(int i=0; i<n; i++){
        s+= a[i];
    }
    TB = s/n;
    return TB;

}
// ham hien thi phan tu lon hon gia tri trung binh
void in(double a[], unsigned int n){
    for(int i=0; i<n; i++){
        if(a[i]>TB(a,n)){
            printf ("%.2lf\t", a[i]);
        }
    }
}
int main()
{
    unsigned int n;
    double a[100];
    scanf("%u", &n);
    nhap(a,n);
    hienTHi(a,n);
    printf("\nAvg = %.3lf\n", TB(a,n));
    in(a,n);
    return 0;
}

//TAARR014
#include <stdio.h>
#include <stdlib.h>
//#define LEN 10005

int nhap(unsigned int a[], unsigned int n)
{
    for(unsigned int i=0; i<n; i++){
        scanf("%u", &a[i]);
    }
}
void demChanLe(unsigned int a[], unsigned int n, unsigned int t)
{
    int demChan = 0, demLe =0;
    for(unsigned int i=0; i<n; i++){
        if(a[i] %2 == 0){
            demChan++;
        }
        else demLe++;
    }
    printf("Testcase %u: %d even element(s), %d odd element(s)\n",t,demChan, demLe);
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r",stdin);
#endif
    unsigned int testcase,n;
    scanf("%u",&testcase);
    scanf("%u",&n);
    unsigned int a[n];
    for(unsigned int i=0; i<testcase; i++)
    {
        nhap(a,n);
        demChanLe(a,n,i);
    }
    return 0;
}


//TAARR015
#include <stdio.h>
#include <stdlib.h>
void nhap(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void tong(int a[],int x)
{
    int sum=0;
    for(int i=0; i<x; i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    tong(a,n);
}

//TAARR016
#include <stdio.h>

void nhap(double a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%lf", &a[i]);
    }
}
void giaTriMax(double a[], int n){
    double max =a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
     printf("Max = %.3lf\n",max);
}
void giaTriMin(double a[], int n){
    double min =a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("Min = %.3lf\n",min);
}
int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    nhap(a,n);
    giaTriMin(a,n);
    giaTriMax(a,n);
    return 0;
}

//TAARR017
#include <stdio.h>

void nhap(double a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%lf", &a[i]);
    }
}
void giaTriMax(double a[], int n){
    double max =a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
     printf("Max = %.3lf\n",max);
}
void giaTriMin(double a[], int n){
    double min =a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("Min = %.3lf\n",min);
}
int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    nhap(a,n);
    giaTriMin(a,n);
    giaTriMax(a,n);
    return 0;
}

//TAARR018
#include <stdio.h>
#include <stdlib.h>
#define LEN 10005

int kiemTraDoiXung(int a[],int n)
{
    for(int i=0; i<(n/2); i++)
    {
        if(a[i]!=a[n-i-1])
        {
            return 0;
        }

    }
    return 1;
}
int nhap()
{
    int a;
    scanf("%d", &a);
    return a;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r",stdin);
#endif
    unsigned int testcase;
    scanf("%u",&testcase);
    int a[LEN];
    for(int t=0; t<testcase; t++)
    {
       int j=0;
        a[j]=nhap();
        while(a[j]!=0)
        {   j++;
            a[j]=nhap();
        }
        int x=kiemTraDoiXung(a,j);
        if(x==0)
            printf("Testcase %u: Asymmetric\n",t);
        else
            printf("Testcase %u: Symmetric\n",t);
    }
    return 0;
}

//TAARR019
#include <stdio.h>

void nhap(int  a[], int n)
{
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
   for(int i=0; i<n; i++){
        printf("%5d", a[i]);
    }
}
void sapXep(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a,n);
    xuat(a,n);
    printf("\n");
    sapXep(a,n);
    xuat(a,n);
    return 0;
}

//TAARR020
#include <stdio.h>
#define LEN 10005

void xuat(int a[], int n)
{
   for(int i=0; i<n; i++){
        printf("%5d", a[i]);
    }
}

void sapXep(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void hienThi(int a[], int n, int t){
    printf("Testcase %02d: n = %d\n",t,n);
    printf("Orig: ");
    xuat(a,n);
    printf("\n");
    printf("Sort: ");
    sapXep(a,n);
    xuat(a,n);
    printf("\n\n");
}
int nhap()
{
    int a;
    scanf("%d", &a);
    return a;
}
int main()
{
      #ifndef ONLINE_JUDGE
    freopen("F:\\input.txt", "r",stdin);
#endif
    int t;
    scanf("%d", &t);
    int a[LEN];
    for(int i=0; i<t; i++)
    {
       int j=0;
        a[j]=nhap();
        while(a[j]!=0)
        {   j++;
            a[j]=nhap();
        }
        hienThi(a,j+1,i);
    }


    return 0;
}

//TAARR021
#include <stdio.h>
#include <stdlib.h>

void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

}
void in_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%5d", a[i]);
    }

    printf("\n");
}
void sapxep_tang(int a[], int vitri[], int n)
{
    int i,j,temp;
    for(i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                temp = vitri[j];
                vitri[j]=vitri[j+1];
                vitri[j+1] = temp;
            }
        }
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int vitri[n];
    nhap_mang(a,n);
    int i;
    for(i=0; i<n; i++)
    {
        printf("%5d", i);
    }
    printf("\n");
    in_mang(a,n);
    for(i=0; i<n; i++)
    {
        vitri[i] = i;
    }
    sapxep_tang(a,vitri,n);
    in_mang(a,n);
    in_mang(vitri,n);
    return 0;
}




//TAARR022
#include <stdio.h>
#include <stdlib.h>

void nhap_mang(int a[], unsigned int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

}
void in_mang(int a[], unsigned int n)
{
    printf("a[%u] = {",n);
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
        if(i==n-1){
            printf("};");
        }
        else printf(", ");
    }
}
int main()
{

    unsigned int n;
    scanf("%u", &n);
    int a[n];
    nhap_mang(a,n);
    in_mang(a,n);
    return 0;
}




//TAARR032
#include <stdio.h>
#include <math.h>

void doicho(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void nhap(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%4d ",a[i]);
    }
    printf("\n");
}
void noibot(int a[],int n)
{
    int l=1;
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    doicho(&a[i],&a[j]);
                    printf("%4d: ",l);
                    xuat(a,n);
                    l++;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }
}
int main()
{

    int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    int i=0;
    printf("%4d: ",i);
    xuat(a,n);

    noibot(a, n);
    return 0;
}

//TAARR033
#include <stdio.h>
#include <stdlib.h>


void inMang(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}

void bubble_sort1(int a[],int n)
{
    int dem=0;
    printf("%4d: ",dem);
    inMang(a,n);
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
        {
            if(a[j]>a[j+1])
            {
                int tg;
                tg=a[j];
                a[j]=a[j+1];
                a[j+1]=tg;
                dem++;
                printf("%4d: ",dem);
                inMang(a,n);
            }
        }
    }
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort1(a,n);
    return 0;
}

//====================================================================================

// TAPTR001
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void truoc(int *x)
{
    *x = *x-1;
}
void sau(int *x)
{
    *x = *x+1;

}
int main()
{
    int x;
    scanf("%d",&x);
    truoc(&x);
    printf("%d\n", x);
    x++;
    sau(&x);
    printf("%d\n", x);
    return 0;
}
// TAPTR005
#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n){
    for(int i=0; i <n ; i++){
        scanf("%d",&a[i]);
    }
}
void inMang(int a[], int n){
    for(int i=0; i <n ; i++){
       printf("%5d",a[i]);
    }
    printf("\n");

}
void hoanVi(int *pa, int *pb)
{
    int tem = *pa;
    *pa = *pb;
    *pb = tem;
}
void sapXepTang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                hoanVi(&a[i], &a[j]);
            }
        }
    }
    inMang(a,n);

}
void sapXepGiam(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                hoanVi(&a[i], &a[j]);
            }
        }
    }
    inMang(a,n);

}
int main()
{
    int a[5000],n;
    scanf("%d",&n);
    nhapMang(a,n);
    inMang(a,n);
    sapXepTang(a,n);
    sapXepGiam(a,n);
    return 0;
}

// TAPTR0016
#include <stdio.h>
#include<stdlib.h>
void nhapMang(int *a, int n)
{
    int i;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
void in(int *a,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int *a=(int*)malloc(n*sizeof(int));
    nhapMang(a,n);
    in(a,n);
    return 0;
}

//===========================================================
//TASTR001
#include<stdio.h>
int main(){
    char st[205];

    gets(st);
    printf("Hello, %s!\n",st);
    printf("Welcome to our Academy!");
    return 0;

}

//TASTR002
#include<stdio.h>
#include<string.h>
int main(){
    char st[205];
    gets(st);
    for(int i = 0; i<strlen(st); i++){
        if(st[i]>96 && st[i]<123 && st[i] != '!'){
            printf("%c",st[i]-32);
        }
        else {
            printf("%c",st[i]);
        }
    }
    return 0;

}
//TASTR003
#include <stdio.h>
#include<string.h>
int main()
{
    char st[1005];
    gets(st);
    int count =0;
    int i;
    char m;
    scanf("%c",&m);
    if(m>='a'&&m<='z')
    {
        m=m-32;
    }
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]>='a'&&st[i]<='z')
        {
            st[i]=st[i]-32;
        }
        if(st[i]==m)
        {
            count++;
        }
    }
    printf("%d",count);

}

//TASTR005
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char ch1[505], ch2[505], dem[300] = {0};
    gets(ch1);
    gets(ch2);
    for(int i=0; i<strlen(ch1); i++){
        for(int j=0; j<strlen(ch2); j++){
            if(ch1[i]==ch2[j]){
                dem[ch1[i]]++;
            }
        }
    }
    for(int i=0; i<=256; i++){
        if(dem[i]>0){
            printf("%c", i);
        }
    }
    return 0;
}
//TASTR015
#include<stdio.h>

int act_strlen(char *str)
{
    return strlen(str);
}

int main()
{
    int t, i;
    int len[100];
    char s[205];
    scanf("%d", &t);
    gets(s);
    for(i = 0; i < t; i++)
    {
        gets(s);
        len[i]=act_strlen(s);
    }

    for(i = 0; i < t; i++)
    {
    	printf("%d\n",len[i]);
	}

    return 0;
}
//==================================================================================
//TASTRU01
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
typedef struct
{
    double x,y,z;
}toaDo;
void nhap(toaDo *diem)
{
    scanf("%lf",&diem->x);
    scanf("%lf",&diem->y);
    scanf("%lf",&diem->z);
}
void hienThi(toaDo diem,int d)
{
    printf("(%.*lf, %.*lf, %.*lf)\n",d,diem.x,d,diem.y,d,diem.z);
}
void khoangCach(toaDo diem1, toaDo diem2,int d)
{

    double kc;
    kc = (diem2.x - diem1.x)* (diem2.x - diem1.x);
    kc += (diem2.y -diem1.y)* (diem2.y - diem1.y);
    kc += (diem2.z - diem1.z)* (diem2.z - diem1.z);
    kc = sqrt(kc);
    printf("%.*lf",d,kc);
}
int main()
{
    int d;
    toaDo dien1;
    toaDo dien2;
    nhap(&dien1);
    nhap(&dien2);
    scanf("%d", &d);
    hienThi(dien1,d);
    hienThi(dien2,d);
    khoangCach(dien1,dien2,d);
    return 0;
}

//TASTRU02
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
typedef struct
{
    double x,y;
} toaDo;
void nhap(toaDo *diem)
{
    scanf("%lf",&diem->x);
    scanf("%lf",&diem->y);
}
void kiemTra(toaDo diem)
{
    if(diem.x>0 && diem.y >0)
    {
        printf("thuoc phan tu mat phang so 1");
    }
    else if(diem.x<0 && diem.y >0)
    {
        printf("thuoc phan tu mat phang so 2");
    }
    else if(diem.x<0 && diem.y <0)
    {
        printf("thuoc phan tu mat phang so 3");
    }
    else
    {
        printf("thuoc phan tu mat phang so 4");
    }
}
void hienThi(toaDo diem,int d)
{
    printf("(%.*lf, %.*lf) ",d,diem.x,d,diem.y);
    kiemTra(diem);
}
void khoangCach(toaDo diem1, toaDo diem2,int d)
{

    double kc;
    kc = (diem2.x - diem1.x)* (diem2.x - diem1.x);
    kc += (diem2.y -diem1.y)* (diem2.y - diem1.y);
    kc = sqrt(kc);
    printf("Khoang cach = %.*lf",d,kc);
}
int main()
{
   	#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int d,t;
    scanf("%d",&t);
    toaDo dien1;
    toaDo dien2;
    for(int i=0; i<t; i++)
    {
        nhap(&dien1);
        nhap(&dien2);
        scanf("%d", &d);
        hienThi(dien1,d);
        printf("\n");
        hienThi(dien2,d);
        printf("\n");
        khoangCach(dien1,dien2,d);
        printf("\n\n");
    }
    return 0;
}

//TASTRU03
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
# define M_PI           3.14159265358979323846
typedef struct
{
    double x,y;
} toaDo;
void nhap(toaDo *diem)
{
    scanf("%lf",&diem->x);
    scanf("%lf",&diem->y);
}
void chuVi(double r,int d)
{
    double chuVi;
    chuVi= 2*r*M_PI;
    printf("Chu vi = %.*lf", d,chuVi);
}
void dienTich(double r,int d)
{
    double dienTich;
    dienTich= r*r*M_PI;
    printf("Dien tich = %.*lf", d,dienTich);
}
void hienThiTam(toaDo diem,int d)
{
    printf("Tam = (%.*lf, %.*lf)\n",d,diem.x,d,diem.y);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
#endif // ONLINE_JUDGE
    int d,t;
    double r;
    scanf("%d",&t);
    toaDo dien1;
    for(int i=0; i<t; i++)
    {
        nhap(&dien1);
        scanf("%lf",&r);
        scanf("%d", &d);
        hienThiTam(dien1,d);
        printf("Ban kinh = %.*lf\n",d,r);
        chuVi(r,d);
        printf("\n");
        dienTich(r,d);
         printf("\n\n");
    }
    return 0;
}

//TASTRU04
#include<stdio.h>
#include<math.h>

typedef struct
{
    double x,y;
} Toado;

void nhapdiem(Toado *p)
{
    scanf("%lf%lf", &p->x, &p->y);
}

double khoang_cach(Toado diem1, Toado diem2)
{

    double kc;
    kc = (diem2.x - diem1.x)* (diem2.x - diem1.x);
    kc += (diem2.y -diem1.y)* (diem2.y - diem1.y);
    kc = sqrt(kc);
    return kc;
}

void xac_dinh_vi_tri_tuong_quan(Toado t1, Toado d1, double r)
{
    if (khoang_cach(t1, d1) > r)
    {
        printf("Diem P nam ngoai hinh tron C\n");
    }
    if (khoang_cach(t1, d1) < r)
    {
        printf("Diem P nam trong hinh tron C\n");
    }
    if (khoang_cach(t1, d1) == r)
    {
        printf("Diem P nam tren duong tron C\n");
    }
}


int main()
{
    	#ifndef ONLINE_JUDGE
    freopen("F:\\input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    Toado t1, d1;
    int t, i;
    double r;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        nhapdiem(&t1);
        scanf("%lf", &r);
        nhapdiem(&d1);
        xac_dinh_vi_tri_tuong_quan(t1, d1,r);
    }

    return 0;
}

//TASTRU05
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    double x,y;
} diem;

void nhap(diem *p)
{
    scanf("%lf %lf",&p->x,&p->y);
}
double khoangCach(diem p1, diem p2)
{
    double kc;
    kc=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    return kc;
}
void xacDinhViTri(diem p1,diem p2, double r1,double r2)
{
double kc = khoangCach(p1,p2);
    if(kc<r1-r2)
    {
        printf("C2 nam trong C1\n");
    }
    else if(p1.x==p2.x && p1.y==p2.y && r1==r2)
    {
        printf("C2 trung C1\n");
    }
    else if(kc==r2-r1)
    {
        printf("C2 bao C1 va tiep xuc voi C1\n");
    }
    else if(kc<r2-r1)
    {
        printf("C2 bao ngoai C1\n");
    }
    else if(r1-r2==kc)
    {
        printf("C2 nam trong C1 va tiep xuc voi C1\n");
    }
    else if(r2-r1<kc && r1+r2>kc)
    {
        printf("C2 cat C1\n");
    }
    else if(r1+r2==kc)
    {
        printf("C2 nam ngoai C1 va tiep xuc voi C1\n");
    }
    else
    {
        printf("C2 nam ngoai C1\n");
    }
}

int main ()
{
    unsigned int t;
    scanf("%u\n",&t);
    int i;
    double r1,r2;
    diem C1,C2;
    for(i=0; i<t; i++)
    {
        nhap(&C1);
        scanf("%lf",&r1);
        nhap(&C2);
        scanf("%lf",&r2);
        xacDinhViTri(C1,C2,r1,r2);
    }
    return 0;
}

//TASTRU06
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    double x, y;
} diem;

void nhap(diem *p)
{
    scanf("%lf%lf", &p->x, &p->y);
}

double khoangCach(diem diem1, diem diem2)
{

    double kc;
    kc = (diem2.x - diem1.x)* (diem2.x - diem1.x);
    kc += (diem2.y -diem1.y)* (diem2.y - diem1.y);
    kc = sqrt(kc);
    return kc;
}

double chuVi(diem p1, diem p2, diem p3){
    double p;
    p = khoangCach(p1,p2) + khoangCach(p2, p3) + khoangCach(p3,p1);
    return p;
}
double dienTich(diem p1, diem p2, diem p3){
    double s;
    double c = chuVi(p1,p2,p3)/2;
    s = sqrt(c * (c - khoangCach(p1,p2)) * (c - khoangCach(p2,p3)) * (c - khoangCach(p3,p1)));
    return s;
}
int main()
{
    int t;
    diem p1,p2,p3;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        nhap(&p1);
        nhap(&p2);
        nhap(&p3);
        printf("s = %.5lf; p = %.5lf\n",dienTich(p1,p2,p3), chuVi(p1,p2,p3));
    }
    return 0;
}

//TASTRU12
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
int namNhuan(int y)
{
    if(y%400==0 || (y%4==0 && y%100!=0))
    {
        return 1;
    }
    return 0;

}
int valid_date(int d, int m, int y)
{
    if(d<=0 || m<=0 || y<=0 || m>12 || d>31)
        return 0;

    if((m==4 || m==6 || m==9 || m==11) && d>30)
        return 0;

    if(m==2)
    {
        if((namNhuan(y) && d>29) || (!namNhuan(y) && d>28))
            return 0;
        else
            return 1;
    }
    return 1;
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{
    int t,i;
    date t1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        nhap(&t1);
        if(valid_date(t1.d,t1.m,t1.y))
            printf("%d/%d/%d: Valid\n", t1.d, t1.m, t1.y);
        else
            printf("%d/%d/%d: Invalid\n", t1.d, t1.m, t1.y);
    }
    return 0;
}

//TASTRU13
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
int namNhuan(int y)
{
    if(y%400==0 || (y%4==0 && y%100!=0))
    {
        return 1;
    }
    return 0;

}
int kiemTra(int d, int m, int y)
{
    if((m==1 || m == 3 || m== 5 || m == 7 || m==8 || m == 10 || m==12) && m ==31)
        return 1;

    if((m==4 || m==6 || m==9 || m==11) && d==30)
        return 1;

    if(m==2)
    {
        if((namNhuan(y)==1 && d==29) || (namNhuan(y)==0 && d==28))
            return 1;
        else
            return 0;
    }
    return 0;
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{
    int t,i;
    date t1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        nhap(&t1);
        if(kiemTra(t1.d,t1.m,t1.y))
            printf("%d/%d/%d: Yes\n", t1.d, t1.m, t1.y);
        else
            printf("%d/%d/%d: No\n", t1.d, t1.m, t1.y);
    }
    return 0;
}

//TASTRU14
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
int kiemTra(date p1 ,date p2)
{
    if(p1.y == p2.y){
        if(p1.m == p2.m){
            if(p1.d == p2.d){
                return 2;
            }
            else if(p1.d > p2.d){
                return 1;
            }
            else return 0;
        }
        else if(p1.m>p2.m){
            return 1;
        }
        else  return 0;
    }
    else  if(p1.y > p2.y){
        return 1;
    }
    else  return 0;
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{

    int t,i;
    date t1,t2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        nhap(&t1);
        nhap(&t2);
        if(kiemTra(t1,t2)==1)
            printf("%d/%d/%d > %d/%d/%d\n", t1.d, t1.m, t1.y,t2.d, t2.m, t2.y);
        else if(kiemTra(t1,t2) == 0){
           printf("%d/%d/%d < %d/%d/%d\n", t1.d, t1.m, t1.y,t2.d, t2.m, t2.y);
        }
        else {
             printf("%d/%d/%d = %d/%d/%d\n", t1.d, t1.m, t1.y,t2.d, t2.m, t2.y);
        }

    }
    return 0;
}

//TASTRU15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
void ngayKeTiep(date p)
{
    if(p.m==1||p.m==3||p.m==5||p.m==7||p.m==8||p.m==10||p.m==12)
    {
        if(p.d==31)
        {
            if(p.m==12)
            {
                p.d=1;
                p.m=1;
                p.y++;
            }
            else
            {
                p.d=1;
                p.m++;
            }
        }
        else if(p.d>0&&p.d<31)
        {
            p.d++;
        }
        else return;
    }
    else if(p.m==4||p.m==6||p.m==9||p.m==11)
    {
        if(p.d==30)
        {
            p.d=1;
            p.m++;
        }
        else if(p.d>0&&p.d<30)
        {
            p.d++;
        }
        else return;
    }
    else if(p.m==2)
    {
        if((p.y % 400 ==0 || (p.y % 100 != 0 && p.y % 4 == 0)))
        {
            if(p.d==29)
            {
                p.d=1;
                p.m++;
            }
            else if(p.d>0&&p.d<29)
            {
                p.d++;
            }
            else return;
        }
        else
        {
            if(p.d==28)
            {
                p.d=1;
                p.m++;
            }
            else if(p.d>0&&p.d<28)
            {
                p.d++;
            }
            else return;
        }
    }
    printf("Ngay ke tiep: %d/%d/%d\n",p.d, p.m, p.y);
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{


    date p;

    nhap(&p);
    printf("Ngay hien tai: %d/%d/%d\n",p.d, p.m, p.y);
    ngayKeTiep(p);

    return 0;
}

//TASTRU16
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int d, m, y;
} date;
void ngayLienTruoc(date p)
{
    if(p.m==1||p.m==5||p.m==7||p.m==8||p.m==10||p.m==12)
    {
        if(p.d==1)
        {
            if(p.m==1)
            {
              p.d=31;
                p.m=12;
                p.y--;
            }
            else if(p.m==8){
                p.d=31;
                p.m--;
            }
            else {
                p.d = 30;
                p.m--;
            }

        }
        else if(p.d>1&&p.d<=31)
        {
            p.d--;
        }
        else return;
    }
    else if(p.m==2||p.m==4||p.m==6||p.m==9||p.m==11)
    {
        if(p.d==1)
        {
            p.d=31;
            p.m--;
        }
        else if(p.d>1&&p.d<=30)
        {
            p.d--;
        }
        else return;
    }
    else if(p.m==3)
    {
        if((p.y % 400 ==0 || (p.y % 100 != 0 && p.y % 4 == 0)))
        {
            if(p.d==1)
            {
                p.d=29;
                p.m--;
            }
            else if(p.d>1&&p.d<=29)
            {
                p.d--;
            }
            else return;
        }
        else
        {
            if(p.d==1)
            {
                p.d=28;
                p.m--;
            }
            else if(p.d>1&&p.d<=28)
            {
                p.d--;
            }
            else return;
        }
    }
    printf("Ngay truoc do: %d/%d/%d\n",p.d, p.m, p.y);
}
void nhap(date *t)
{
    scanf("%d %d %d", &t->d, &t->m, &t->y);
}
int main()
{


    date p;

    nhap(&p);
    printf("Ngay hien tai: %d/%d/%d\n",p.d, p.m, p.y);
    ngayLienTruoc(p);

    return 0;
}
