#include <stdio.h>
int main()
{
    char name[30],lop[10];
    int nam;
    float diem;
    printf("Nhap vao ho ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    printf("Ho ten cua ban la: ");
    puts(name);
    printf("Nhap vao lop cua ban:");
    scanf("%s",&lop);
    printf("\Lop cua ban la :%s",lop);
    printf("\n\nNhap vao nam sinh cua ban:");
    scanf("%d",&nam);
    printf("\Nam sinh cua ban la:%d",nam);
    printf("\n\nNhap vao diem do vao truong cua ban:");
    scanf("%f",&diem);
    printf("\Diem vao truong cua ban la:%.2f",diem);
    return 0;
}
