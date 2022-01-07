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
typedef struct node
{
    SV data;
    struct node *pNext;
} node;

node*list =NULL;

//nhap du lieu
SV nhapdulieu()
{
    SV sv;
    printf("hoten sinh vien ");
    fflush(stdin);
    gets(sv.hoten);
    printf("tuoi ");
    scanf("%d",&sv.tuoi);
    printf("diem TB  ");
    scanf("%f",&sv.diemtb);
    return sv;
}

node* taonode()
{
    node*p;
    p=(node*)malloc(sizeof(node));
    p->data = nhapdulieu();
    p->pNext=NULL;
    return p;
}


void taonodedau()
{
    node*p=taonode();
    list=p;
}
void themcuoi()
{
    if(list==NULL)
    {
        taonodedau();
    }
    else
    {
        node *p;
        p=taonode();
        node*k;
        for(k=list; k->pNext!=NULL; k=k->pNext);
        k->pNext=p;

    }


}
// menu
void menu()
{
    printf("\t\tMENU\n");
    printf("\t1.nhap danh sach sinh vien\n  ");
    printf("\t2.hien thi danh sach sinh vien\n");
    printf("\t3.sua sinh vien\n");
    printf("\t4.Ket thuc\n");
    printf("\t\tVuilongchon\n");
}


//nhap dslk
void nhapdanhsachsinhvien(int n)
{


    for(int i=1; i<=n; i++)
    {
        printf("nhap sinh vien thu %d\n",i);
        themcuoi();
    }
}

//hien thi dslk
void hienthidanhsach()
{

    printf("\t\t\tDANHSACH\n");
    printf("\t%3s|%10s|%10s|%6s|\n","STT","hoten","tuoi","diemtb");
    node *k;
    int i=1;
    for(k=list; k!=NULL; k=k->pNext)
    {
        printf("\t%3d|%10s|%10d|%6.2f|\n",i++,k->data.hoten,k->data.tuoi,k->data.diemtb);
    }
}
node *lasinhvien(char ten[20])
{
    node*k;
    for(k=list; k!=NULL; k=k->pNext)
        if(strcmp(k->data.hoten,ten)==0)
            return k;
    return 0;
}
void suasinhvien(char ten[20])
{
    if(lasinhvien(ten) == NULL)
        printf("ko co sinh vien trong danh sach ");
    else
    {
        node*k=lasinhvien(ten);
        k->data=nhapdulieu();
    }
}




int main()
{
    int x;
    int n;
    SV sv;
    char ten[20];
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
            printf("nhap so sinh vien ");
            scanf("%d",&n);
            nhapdanhsachsinhvien(n);
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;
        case 2:
            system("cls");
            printf("\tBan da chon hien thi danh sach sinh vien\n");
            if(list==NULL)
                printf("vui long nhap danh sach sinh vien truoc");
            hienthidanhsach();

            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;
        case 3:
            system("cls");
            printf("\tBan da chon sua danh sach sinh vien\n");
            printf("\tNhap ten sinh vien ma ban muon sua: ");
            fflush(stdin);
gets(ten);
            suasinhvien(ten);

            printf("\n\tBam phim bat ky de tro ve menu");
            getch();
            break;

        case 4:
            system("cls");
            printf("Ban da chon ket thuc chuong trinh ");
            printf("nhan phim bat ky de tro ve menu ");
            getch();
            break;

        default:
            printf("\tNhap cac so tu 1 den3 \n");
            printf("\n\tBam phim bat ky de tro ve menu");
            getch();


        }
    }
    return 0;
}
