#include<stdio.h>
int main() {
        float a,b;
        scanf("%f%f", &a,&b);
        if (a<=b)
        {
            printf("a<b");
        }
        else if (a==b)
        {
            printf("a=b");
        }
        else
        {
            printf("a>b");
        }
    return 0;
}

