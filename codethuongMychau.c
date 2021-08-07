#include<stdio.h>

int main(){
            int a,b,c,d,e;
            scanf ("%d%d%d%d", &a,&b,&c,&d,&e);
            if(a%2!=0)
            {
                printf("Trong thuy di duoc 0 km va khong duoi kip Mi chau");
            }
            if(a%2==0 && b%2!=0)
            {
                printf("Trong thuy di duoc 10km va khong duoi kip Mi chau");
            }
            if(a%2==0 && b%2==0 && c%2!=0)
            {
                printf("Trong thuy di duoc 20km va khong duoi kip Mi chau");
            }
            if(a%2==0 && b%2==0 && c%2==0 && d%2!=0)
            {
                printf("Trong thuy di duoc 30km va khong duoi kip Mi chau");
            }
            if (a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2!=0)
            {
                printf("Trong thuy di duoc 40km va khong duoi kip Mi chau");
            }
            else
            {
                printf("trong thuy du dc 50km va duoi kip mi chau");
            }
	 return 0;
}
