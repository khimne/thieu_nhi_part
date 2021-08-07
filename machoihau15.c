#include<stdio.h>
int main()
{
    int xh,yh,xm,ym;
    scanf("%d%d", &xh,&yh);
    scanf("%d%d", &xm,&ym);
    if ((x1,y1,x2,y2)>=1 && (x1,y1,x2,y2)<=8 )
    {
        if (x1==x2 || y1==y2 || x1-y1==x2-y2 || x1+y1==x2+y2)
        {
            printf("Hau khong an duoc ma ");
        }
        else
        {
            printf("Hau an duoc ma");
        }
        if ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)==5)
        {
            printf("\nMa khong an duoc hau");
        }
        else
        {
            printf("\nMa co the an duoc hau");
        }
    }
    else
    {
        printf("khong hop le");
    }
    return 0;
}
