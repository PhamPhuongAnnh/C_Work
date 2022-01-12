#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct Diem
{
    float x;
    float y;
    float z;
};
int d;
typedef struct Diem DIEM;


void NhapDiem(DIEM *a)
{
    scanf("%f", &a->x);

    scanf("%f", &a->y);

    scanf("%f", &a->z);
}
void XuatDiem(DIEM a)
{
    printf("(%.*f, %.*f, %.*f)\n",d,a.x,d, a.y,d, a.z);
}

float TinhKhoangCachGiua2Diem(DIEM a, DIEM b)
{
    float kq = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y) + (b.z - a.z)* (b.z - a.z));
    return kq;

}
int main()
{
    DIEM a, b;
    NhapDiem(&a);
    XuatDiem(a);
    NhapDiem(&b);
    XuatDiem(b);
    scanf("%d",&d);
    float khoangcach = TinhKhoangCachGiua2Diem(a, b);
    printf("%.*f",d,khoangcach);

    return 0;
}
