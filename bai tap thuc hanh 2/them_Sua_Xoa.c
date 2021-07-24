#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct thisinh
{
    char ten[30];
    int diemToan;
    int diemLy;
    int diemHoa;
} thisinh;

typedef struct Tnode
{
    thisinh data;
    struct Tnode *next;
} Tnode;

typedef struct pList
{
    Tnode *dau;
    Tnode *cuoi;
} pList;

void taoDSLK(pList *l)
{
    l->dau=l->cuoi=NULL;
}

void nhapDuLieu(thisinh *ts)
{

    printf("\n nhap ten thi sinh ");
    fflush(stdin);
    gets(ts->ten);

    printf("\n");
    printf("\n nhap diem Toan ");
    scanf("%d",&ts->diemToan);
    printf("\n");
    printf("\n nhap diem Ly ");
    scanf("%d",&ts->diemLy);
    printf("\n");
    printf("\n nhap diem Hoa ");
    scanf("%d",&ts->diemHoa);
}

void xuatDuLieu(thisinh ts)
{
    printf("\n%30s | %5d | %5d",ts.ten,ts.diemToan,ts.diemLy,ts.diemHoa);
}

Tnode* taoNodeMoi(thisinh *ts)
{
    Tnode *p;
    p=(Tnode*)malloc(sizeof(Tnode));
    if(p==NULL)
    {
        return NULL;
    }
    else
    {
        p->data=*ts;
        p->next=NULL;
    }
    return p;
}

void themVaoDauDS(pList *l,thisinh *ts)
{
    Tnode *p;
    p=taoNodeMoi(ts);
    if(l->dau==NULL)
    {
        l->dau=l->cuoi=p;
    }
    else
    {
        l->cuoi->next=p;
        l->cuoi=p;
    }

}

void nhapDanhSach(pList *l,thisinh *ts)
{
    printf(" nhap so thi sinh: ");
    int n;
    scanf("%d",&n);
    taoDSLK(l);
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n thi sinh thu %d ",i+1);
        nhapDuLieu(ts);
        themVaoDauDS(l,ts);
    }
}

void inDanhSach(pList *l)
{
    printf("\ndanh sach thi sinh ");
    Tnode *p;
    for(p=l->dau; p!=NULL; p=p->next)
    {
        xuatDuLieu(p->data);
    }
}

void chenDanhSach(pList *l,thisinh *ts)
{
    Tnode *p,*k;
    p=(Tnode*)malloc(sizeof(Tnode));
    char tenchen[30];
    printf("\nNhap ten thi sinh can chen ");
    nhapDuLieu(ts);
    p=taoNodeMoi(ts);
    printf("\nnhap chen sau thi sinh " );
    fflush(stdin);
    gets(tenchen);
    k=l->dau;
    while(k!=NULL && strcmp(k->data.ten,tenchen)!=0)
    {
        k=k->next;
    }
    if(k==NULL)
    {
        printf("\nkhong tim thay");
    }
    else
    {
        if(k->next==NULL)
        {
            k->next=p;
        }
        else
        {
            p->next=k->next;
            k->next=p;
        }
        printf("\n da chen xong ");
        inDanhSach(l);
    }

}

void xoaCoTenNHapTuBanPhim(pList l)
{
    char HT[30];
    printf("\n nhap ten can xoa: ");
    fflush(stdin);
    gets(HT);
    Tnode *k=l.dau;
    Tnode *p;
    while(k != NULL && strcmp(HT, k->data.ten) != 0)
    {
        p=k;
        k= k->next;
    }
    if(k==NULL)
    {
        printf("khong tim thay ten can xoa");
    }
    else
    {
        if(l.dau==k)
        {
            k->next = l.dau->next;
            l.dau=k->next;
        }
        else
        {
            p->next = k->next;
            free(k);
        }
       inDanhSach(&l);
    }
}

void inThiSinh(pList *l)
{
    printf("\n danh sach nhung thi sinh diem toan 9");
    Tnode *p;
    for(p=l->dau; p!=NULL; p=p->next)
    {
        if(p->data.diemToan>=9)
        {
            xuatDuLieu(p->data);
        }
    }
}

int main()
{
    pList l;
    thisinh ts;
    nhapDanhSach(&l,&ts);
//    inDanhSach(&l);
//    chenDanhSach(&l,&ts);
//    printf("\n");
//    inDanhSach(&l);
//    inThiSinh(&l);
    xoaCoTenNHapTuBanPhim(l);

    return 0;
}
