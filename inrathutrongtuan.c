#include<stdio.h>
int main() {
        int d;
        scanf("%d",&d);
        if (d<=2 && d>=8)
        {
            printf("Ngay khong hop le");
        }
        else if (d==2)
        {
            printf("Thu Hai");
        }
         else if (d==3)
        {
            printf("Thu Ba");
        }
         else if (d==4)
        {
            printf("Thu Tu");
        }
         else if (d==5)
        {
            printf("Thu Nam");
        }
         else if (d==6)
        {
            printf("Thu Sau");
        }
         else if (d==7)
        {
            printf("Thu Bay");
        }
        else
        {
            printf("Chu nhat");
        }
    return 0;
}
