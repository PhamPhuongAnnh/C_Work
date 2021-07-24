#include <stdio.h>
#include <stdlib.h>
void nhapMang(int arr[],int kichThuoc)
{
	for(int i=0;i<kichThuoc;i++)
	{
		printf("nhap A[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int kichThuoc)
{
	for(int i=0;i<kichthuoc;i++)
	{
		printf("%4d ",arr[i]);
	}
}
void themPhanTu(int arr[],int kichThuoc)
	{	int viTriChen,gtChen;
	printf("nhap vitrichen,gtchen ");
	scanf("%d%d",&vitrichen,&gtchen);
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = kichThuoc; i > viTriChen; i--)
		{
			arr[i] = arr[i-1];
		}
    arr[vitrichen] = gtchen;
    xuatmang(arr,kichthuoc+1);
}
void xoaphantu(int arr[],int kichthuoc)
{
	int vitrixoa;
	printf("nhap vao vi tri xoa ");
	scanf("%d",&vitrixoa);
	for(int i=vitrixoa;i<kichthuoc;i++)
	{
		arr[i]=arr[i+1];
	}
	xuatmang(arr,kichthuoc-1);
}
void xoasochan(int arr[],int kichthuoc)
{
	int i=0,count=0;
	for (int i=0; i<kichthuoc; i++){
        if(arr[i] %2 ==0){
            continue;
        }
        else{
            printf("%4d ",arr[i]);
        }
	}

}

int main()
{	int arr[50],kichthuoc,vitrichen,giatrichen;
	printf("nhap kich thuoc mang ");
	scanf("%d",&kichthuoc);
	nhapmang(arr,kichthuoc);
//	xuatmang(arr,kichthuoc);
	//ThemPhanTu(arr,kichthuoc);
	//xoaphantu(arr,kichthuoc);
	xoasochan(arr,kichthuoc);



    return 0;
}
