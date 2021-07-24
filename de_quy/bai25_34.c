#include<stdio.h>
int s24(int n){
    // tinh tong cac chu so cua so nghuyen duong n
    int d = n%10;
    if(n<10) return n;
    return d+s24(n/10);
}
int s25(int n){
    // tinh tich tich cac chu so cua so nguyen duong n
    int d = n%10;
    if(n<10) return n;
    return d*s25(n/10);
}

int kTChanLe(int n){
    if(n%2 == 0){
        return 1;
    }
    return 0;
}
int s26(int n){
    // dem so luong chu so le cua so nguyen duong n

}
int s27(int n){
    // tinh tong cac chu so chan cua so nguyen duong n
    int d = (n%10)%2;
    if(n<10 && d%2 == 0) return d;
    return n + s27(n/10);
}
int main (){
    int n;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("tong cac chu so cua %d la: %d\n", n,s24(n));
    printf("tich cac chu so cua so nguyen duong %d la: %d\n",n,s25(n));
    printf("so cac chu so le cua %d la: %d\n",n,s26(n));
    printf("tong cac chu so chan cua so nguyen duong %d la: %d",n,s27(n));
    return 0;

}
