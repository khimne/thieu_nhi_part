#include<stdio.h>

int main(){
            float a,b,c;
            printf("Nhap diem chuyen can, Diem thi dieu kien, Diem thi cuoi ky");
            scanf ("%f%f%f", &a,&b,&c);
            float tb=a*0.1 + b*0.2 + c*0.7;
            if ( tb >= 8.5)
            {
                printf("Dat %.2f diem, xep loai A", tb);
            }
            else if ( 7<=tb<=8.5)
            {
                printf("Dat %.2f diem, xep loai B", tb);
            }
            else if (6<=tb<=7)
            {
                printf("Dat %.2f diem, xep loai C", tb);
            }
            else if (5<=tb<=6)
            {
                printf("Dat %.2f diem, xep loai D", tb);
            }
            else
            {
                printf("Dat %.2f diem, xep loai F", tb);
            }
        return 0;
}

