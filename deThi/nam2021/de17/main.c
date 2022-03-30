#include<stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int id;
    float marks;

    fp = fopen("sinhvien.txt", "r");

    if(fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Vi du su dung ham fscanf(): \n\n");
    printf("Name:\t\tID\t\tMarks\n");

    // doc thong tin sinh vien
    while( fscanf(fp, "Name: %s\t\t%d\t\t%f\n"
                    , name, &id, &marks) != EOF )
    {
        printf("%s\t\t%d\t\t%.2f\n", name, id ,marks);
    }

    fclose(fp);
    return 0;
}
