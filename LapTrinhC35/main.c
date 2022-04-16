#include<stdlib.h>
#include <stdio.h>

#define Max 100
int main()
{
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n], b[Max];
    for(int i=0 ;i<n; i++){
        scanf("%d", &a[i]);
    }
    int j =0;
    for(int i =0; i<n; i++){
        if(a[i]%2 ==0){
            printf("%d ",a[i]);
        }
        else{
            b[j++] = a[i];
        }

    }
     for(int i =0; i<j; i++){
      printf("%d ",b[i]);

    }
    return 0;
}

