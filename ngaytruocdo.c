#include<stdio.h>
int main(){
    int d,m,y;
    scanf("%d%d%d", &d,&m,&y);
    if (m>=1 && m<=12)
    {
         if ( m==3 )
        {
             if(y%4==0 || (y%4==0 && y%100 !=0))
            {
                if(d>=2 && d<=31)
                {
                     printf("%02d %02d %02d",d=d-1,m,y);
                }
                else if (d==1)
                {
                    printf("29 %02d %02d",m=m-1,y);
                }
            }
            else if(d>=2 && d<=31)
            {
                printf("%02d %02d %02d",d=d-1,m,y);
            }
            else if (d==1)
            {
                 printf("28 %02d %02d",m=m-1,y);
            }
        }
         else if ( m==1 )
        {
            if (d>=2 && d<=31)
            {
                printf("%02d %02d %02d",d=d-1,m,y);
            }
            else if (d==1)
            {
                printf("31 12 %02d",y=y-1);
            }
        }
        else if (m==8)
        {
            if (d>=2 && d<=31)
            {
                printf("%02d %02d %02d",d=d-1,m,y);
            }
            else if (d==1)
            {
                printf("31 %02d %02d",m=m-1,y);
            }
        }
        else if ( m==5 || m==7 || m==10 )
        {
            if (d>=2 && d<=31)
            {
                printf("%02d %02d %02d",d=d-1,m,y);
            }
            else if (d==1)
            {
                printf("30 %02d %02d",m=m-1,y);
            }
        }
        else if ( m==2 || m==4 || m==6 || m==9 || m==11)
        {
            if(d>=2 && d<=30)
            {
                printf("%02d %02d %02d",d=d-1,m,y);
            }
            else if (d==1)
            {
                printf("31 %02d %02d",m=m-1,y);
            }
        }

    return 0;


}}


