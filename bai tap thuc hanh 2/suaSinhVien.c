
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    char hoten[30];
    int tuoi;
    float diemtb;

} SV;

void taodanhsachlenfile(int n)
{
    FILE* f;
    f = fopen("DS_SV.C","wb");
    if(f==NULL)
    {
        printf("loi tao mo file ");
        return ;
    }

    for(int i=0; i<n; i++)
    {
        SV sv;
        printf("hoten sinh vien ");
        fflush(stdin);
        gets(sv.hoten);
        printf("tuoi ");
        scanf("%d",&sv.tuoi);
        printf("diem TB  ");
        scanf("%f",&sv.diemtb);
        fwrite(&sv,sizeof(SV),1,f);
    }
    fclose(f);

}

void hienthidanhsachsinhvien(int n)
{
    FILE* f;
    SV sv ;
    printf("\t\t\tDANHSACH\n");
    printf("\t%3s|%10s|%10s|%6s|\n","STT","hoten","tuoi","diemtb");
    f=fopen("DS_SV.C","rb");
    for (int i=1; i<=n; i++)
    {
        fread(&sv,sizeof(SV),1,f);
        printf("\t%3d|%10s|%10d|%6.2f|\n",i,sv.hoten,sv.tuoi,sv.diemtb);
    }
    fclose(f);

}

// menu
void menu()
{
    printf("\t\tMENU\n");
    printf("\t1.nhap danh sach sinh vien\n  ");
    printf("\t2.hien thi danh sach sinh vien\n");
    printf("\t\tVuilongchon\n");
}

int main()
{
    int x;

    while(1)
    {
        system("cls");
        menu();
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            system("cls");
            printf("\tBan da chon tao danh sach sinh vien\n");
            int n;
            printf("nhap so luong sinh vien ");
            scanf("%d",&n);

            taodanhsachlenfile(n);
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;
        case 2:
            system("cls");
            printf("\tBan da chon hien thi danh sach sinh vien\n");

            hienthidanhsachsinhvien(n);

            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;

        default:
            printf("\tNhap cac so tu 1 den 2\n");
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();


        }
    }

    return 0 ;
}
