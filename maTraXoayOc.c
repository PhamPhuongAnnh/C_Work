#include <stdio.h>
#include <stdlib.h>
void MATRANXOAY(int arr[][50],int n)
{
    int d = 0, gt = 1; // giá trị khởi tạo băng đầu bằng 1
    int hang = n- 1, cot = n - 1; // vì giá trị của mảng cạy từ 0 nên chỉ số cột ngoài cùng và hàng dưới cùng = n-1
    while (gt <= n* n) // điều kiện có thể lạp lại và tang giá trị
    {
        for (int i = d; i <= cot; i++)  //for 1
        {
            arr[d][i] = gt++;
        }
        for (int i = d + 1; i <= hang; i++)//for 2
        {
            arr[i][cot] = gt++;
        }
        for (int i = cot - 1; i >= d && gt <= n * n; i--)//for 3
        {
            arr[hang][i] = gt++;
        }
        for (int i = hang - 1; i > d && gt <= n * n; i--)//for 4
        {
            arr[i][d] = gt++;
        }
        d++;
        hang--;
        cot--;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%6d",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[50][50],n;
    printf("nhap vao n");
    scanf("%d",&n);
    MATRANXOAY(arr,n);
//IN RA MA TRAN XOAY OC


    return 0;
}
