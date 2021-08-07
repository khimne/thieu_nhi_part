#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(b*b-4*a*c==0)
    {
        printf("Phuong trinh co nghiem kep");
    }
    else if(b*b-4*a*c>=0)
    {
        printf("Phuong trinh co 2 nghiem phan biet");
    }
    else
    {
        printf("Phuong trinh vo nghiem");
    }
    return 0;
}

