#include<stdio.h>
int main()
{
    int a,b,c,d,m;
    scanf("%d%d%d%d%d", &m,&a,&b,&c,&d);
          int flag=1;
          if (a>=m ||b>=m || c>=m ||d>=m)
          {
              flag=0;
          }
          if (!(a+b<=m ||a+c<=m || a+d<=m || b+c<=m || b+d<=m || c+d<=m ) )   //! la else
          {
              flag =0;
          }
          if (flag==1)
          {
              printf("\t Qua duoc song");
          }
          else
          {
              printf("\t Khong qua duoc song");
          }

}
