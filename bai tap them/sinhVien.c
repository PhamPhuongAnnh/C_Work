#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct
{
    char masv[50];
    char hoten[50];
    int namsinh;
} danhsachsinhvien;
FILE *fp;
char *filepath = "DS_SV.C";
danhsachsinhvien sv;
long size= sizeof(danhsachsinhvien);
void nhap()
{
    int n=1;
    char kt;
    fp = fopen(filepath, "wb");
    do
    {
        printf("nhap sinh vien thu %d: \n",n++);
        printf("ma SV: ");
        fflush(stdin);
        gets(sv.masv );
        printf("Ho Ten: ");
        fflush(stdin);
        gets(sv.hoten );
        printf("Nam Sinh: ");
        scanf("%d",&sv.namsinh );
        fwrite(&sv, size, 1,fp);
        printf("nhap tiep an 't': ");
        fflush(stdin);
        kt=getchar();
    }
    while (kt=='t' );
    fclose(fp);
}
void bosung()
{
    int n=1;
    char kt;
    fp=fopen(filepath,"ab");
    do
    {
        printf("Bo sung sinh vien thu %d: \n",n++);
        printf(" Ma SV : ");
        fflush(stdin);
        gets(sv.masv );
        printf(" Ho Ten : ");
        fflush(stdin);
        gets(sv.hoten );
        printf("Nam Sinh: ");
        scanf("%d",&sv.namsinh );
        fwrite(&sv,size,1,fp);
        printf("Bo sung tiep an 't': ");
        fflush(stdin);
        kt=getchar();
    }
    while (kt=='t' );
    fclose(fp);
}
void suatep()
{
    int n=1;
    char kt;
    fp=fopen("DS_SV.C","rb+");
    do
    {
        fflush(stdin);
        printf("sua sv co ma sv: ");
        scanf("%s",&sv.masv);
        fseek(fp,1,SEEK_SET);//đặt con trỏ vào vị trí số 1 của file
        printf("ho ten: ");
        fflush(stdin);
        gets(sv.hoten);// nhập họ tên muốn sửa
        printf("Nam SInh: ");
        scanf("%f",&sv.namsinh);// nhập năm sinh muốn sửa
        fwrite(&sv,size,1,fp);// ghi sinh viên vào file
        printf("sua nua ko tiep an 't' ");
        fflush(stdin);
        kt=getchar();
    }
    while(kt=='t');
    fclose(fp);
}

void in()
{
    int i=0;
    int tong=0;
    fp=fopen(filepath,"rb");
    printf("\n DANH SACH SINH VIEN\n");
    printf("STT \t Ma SV \t Ho Ten \t Nam Sinh ");
    while(fread(&sv,size,1,fp)>0)
    {
        printf("\n%-6d  %s\t\t%s\t\t%.d\n",++i,sv.masv,sv.hoten,sv.namsinh);
    }
    fclose(fp);
    system("pause");
}
int main()
{
    char chon;
    do
    {
        system("cls");
        printf("DANH SACH CHUC NANG CAN THUC HIEN\n");
        printf("1. Tao danh sach\n");
        printf("2. In danh sach\n");
        printf("3. Chen phan tu vao trong danh sach\n");
        printf("4. Sua phan tu trong danh sach\n");
        printf("5. Thoat\n");
        printf("Moi chon chuc nang: ");
        chon=getchar();
        system("cls");
        switch (chon)
        {
        case '1':
            nhap();
            break;
        case '2':
            in();
            break;
        case '3':
            bosung();
            break;
        case '4':
            suatep();
            break;
        }
    }
    while (chon!='5');


    getch();
}
