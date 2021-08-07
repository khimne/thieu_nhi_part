#include<stdio.h>
int main(){
    int d,m,y;
    scanf("%d%d%d", &d,&m,&y);
    if (m>=1 && m<=12)
    {
        if ( m==1 || m==3 || m==5 || m==7 || m==8 || m==10 )
        {
            if (d>=1 && d<=30)
            {
                printf("%2d%2d%2d",d=d+1,m,y);
            }
            else if (d==31)
            {
                printf("01%2d%2d",m=m+1,y);
            }
        }
        else if ( m==4 || m==6 || m==9 || m==11)
        {
            if(d>=1 && d<=29)
            {
                printf("%2d%2d%2d",d=d+1,m,y);
            }
            else if (d==30)
            {
                printf("01%2d%2d",m=m+1,y);
            }
        }
        else if (m==2)
        {
            if(y%4==0 || (y%4==0 && y%100 !=0))
            {
                if(d>=1 && d<=28)
                {
                     printf("%2d%2d%2d",d=d+1,m,y);
                }
                else if (d==29)
                {
                    printf("01%2d%2d",m=m+1,y);
                }
            }
            else if(d>=1 && d<=27)
            {
                printf("%2d%2d%2d",d=d+1,m,y);
            }
            else if (d==28)
            {
                 printf("01%02d%2d",m=m+1,y);
            }
        }
        else if (d>=1 && d<=30)
        {
            printf("%2d%2d%2d",d=d+1,m,y);
        }
        else if (d==31)
        {
            printf("01 01 %d", y=y+1);
        }
    //return 0;


}}

