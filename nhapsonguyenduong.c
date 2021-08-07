#include<stdio.h>
int main(){
        int n;
        scanf("%d", &n);
        int sqr=sqrt(n);

        if(sqr*sqr==n)
        {
            printf("CO");
        }
        else
        {
            printf("KHONG");
        }
    return 0;
}
