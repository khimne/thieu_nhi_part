#include<stdio.h>
int main() {
        int a,b,c;
        scanf("%d%d%d", &a,&b,&c);
        if (a>=b && a>=c)
        {
            printf("max{%d,%d,%d}=%d",a,b,c,a);
        }
        else if (a<=b && b<=c)
        {
            printf("max{%d,%d,%d}=%d",a,b,c,b");
        }
        else
        {
            printf("max{%d,%d,%d}=%d",a,b,c,c");
        }
    return 0;
}
