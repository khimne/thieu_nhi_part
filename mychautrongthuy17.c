#include<stdio.h>
int main()
{
            int a,b,c,d,e;
            scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
            int flag=1;
            int dem=0;
            if (a%2!=0 || b%2!=0 || c%2!=0 || d%2!=0 || e%2!=0)
            {
                flag=0;
            }

             if (!(a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2==0 ))
             {
                 flag=0;
             }
             else if (flag==1 && dem*10==50)
             {
                 printf("Trong thuy di duoc %d km va duoi kip My Chau", dem*10);
             }
             else if (flag==1 && 10<=dem*10<=50)
             {

                 printf("Trong thuy di duoc %d km va khong duoi kip My Chau", dem*10);
             }

             return 0;
             // && 1<=dem<=5
}
