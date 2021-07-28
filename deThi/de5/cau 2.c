/* viet chuong trinh nhap vao hai ma tran a b,
sau do tinh tinh tich ma tran c = a*b; in ba ma tran ra man hinh*/
#include <stdio.h>


void nhapMaTran(int a[][100], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void hienthi(int a[][100], int dong, int cot)
{
    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }


}

void tichHaiMaTran(int a1[][100], int a2[][100], int a3[][100], int dong, int cot)
{

    for(int i=0; i<dong; i++)
    {
        for(int j=0; j<cot; j++)
        {
            a3[i][j]=0;
            for (int k=0; k<cot; k++)
            {
                a3[i][j]+= a1[i][k] * a2[k][j];
            }
        }
    }

}
void  menu()
{
    printf("1. Nhap hai ma tran\n");
    printf("2. Tính tich hai ma tran\n");
    printf("3. Hien thi ba ma tran\n");
    printf("==============================\n");

}
int main()
{
    int a1[100][100],a2[100][100], a3[100][100];
    int dong1, cot1;
    int dong2, cot2;
    int dong, cot;

    while(1)
    {
        menu();
        int c;
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("nhap so dong cot ma tran A: ");
            scanf("%d%d", &dong1, &cot1);
            nhapMaTran(a1,dong1,cot1);
            printf("\nnhap so dong cot ma tran B: ");
            scanf("%d%d", &dong2, &cot2);
            nhapMaTran(a2,dong2,cot2);
            break;
        case 2:
            if(cot1 == dong2 )
            {
                tichHaiMaTran(a1,a2,a3,dong1, cot1);
            }
            else
            {
                printf("hai ma tran khong the nhan");
            }
            break;
        case 3:
            printf("Ma tran A\n");
            hienthi(a1,dong1,cot1);
            printf("Ma tran b\n");
            hienthi(a2,dong2,cot2);
            printf("Ma tran C\n");
            hienthi(a3,dong1,cot2);
            break;
        default:
            printf("PA da quen lenh thoat chuong trinh");
            break;
        }
    }






    return 0;

}

