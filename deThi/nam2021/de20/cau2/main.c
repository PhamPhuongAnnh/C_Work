#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char id[10];
    char name[50];
    int age;
} SV;

void writeFile(FILE *f, SV sv)
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    f = fopen("DS_SV.C", "wb");
    for(int i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Nhap ma sinh vien: ");
        gets(sv.id);
        printf("Nhap ho ten sinh vien: ");
        gets(sv.name);
        printf("nhap nam sinh sinh vien: ");
        scanf("%d", &sv.age);
        fwrite(&sv, sizeof(SV), 1,f);
    }
    fclose(f);
}
void readFile(FILE *f, SV sv)
{
    f = fopen("DS_SV.C", "rb");
    rewind(f);
    int i=1;
    printf("=====================DANH SACH SINH VIEN=======================\n");
    printf("%10s%16s%16s%16s\n", "STT", "Ma SV", "Ho ten", "Nam sinh");
    while (fread(&sv, sizeof(SV), 1,f)!=NULL)
    {
        printf("%10d%16s%16s%16d\n",i++, sv.id, sv.name, sv.age );

    }
    fclose(f);
}
void suaDanhSachSinhVien(FILE *f,FILE *fm, SV sv)
{

    f = fopen("DS_SV.C", "rb");
    fm = fopen("DS_SV1.C", "wb");
    char ht[50];
    SV sv1;
    printf("\nNhap ho ten sinh vien muon chinh sua: ");
    fflush(stdin);
    gets(ht);
    printf("\nNhap ten sua lai: ");
    fflush(stdin);
    gets(sv1.name);
    printf("\nNhap nam sinh sua lai: ");
    scanf("%d", &sv1.age);
    while(fread(&sv, sizeof(SV), 1,f)!=NULL)
    {
        if(strcmp(sv.name, ht) == 0)
        {
            printf("0\n");
            strcpy(sv1.id, sv.id);
            fwrite(&sv1, sizeof(SV), 1,fm);
        }
        else
        {
            printf("1\n");
            fwrite(&sv, sizeof(SV), 1,fm);
        }

    }
    fclose(fm);
    fm = fopen("DS_SV1.C", "rb");
    rewind(f);
    int i=1;
    printf("=====================DANH SACH SINH VIEN=======================\n");
    printf("%10s%16s%16s%16s\n", "STT", "Ma SV", "Ho ten", "Nam sinh");
    while (fread(&sv, sizeof(SV), 1,fm)!=NULL)
    {
        printf("%10d%16s%16s%16d\n",i++, sv.id, sv.name, sv.age );

    }
    fclose(f);
    fclose(fm);
}

void menu()
{
    printf("\n\n");
    printf("__________________MENU__________________\n");
    printf("1. Tao danh sach sinh vien\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. Sua thong tin sinh vien\n");
    printf("4. Ket thuc\n");
    printf("Lua chon: ");
}
int main()
{
    FILE *f, *fm;
    SV sv;

    while(1)
    {
        menu();
        int check;
        scanf("%d", &check);
        switch(check)
        {
        case 1:
            writeFile(f,sv);
            break;
        case 2:
            readFile(f,sv);
            break;
        case 3:
            suaDanhSachSinhVien(f,fm,sv);

            break;
        case 4:
            exit(0);
        default:
            printf("Moi nhap lai!!");
            break;
        }
    }
    return 0;
}
