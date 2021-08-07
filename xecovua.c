#include<stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
     if ((x1,y1,x2,y2)>=1 && (x1,y1,x2,y2)<=8 )
     {
        if (x1==x2 || y1==y2)
        {
            printf("xe 1 (%d,%d0) va xe 2 (%d,%d) co the an nhau", x1,y1,x2,y2);
        }
        else
        {
            printf("xe 1 (%d,%d0) va xe 2 (%d,%d) co khong the an nhau", x1,y1,x2,y2);
        } }
      else
      {
          printf("khong hop le");
      }
     return 0;
}
