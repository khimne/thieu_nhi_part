#include<stdio.h>
int main (){
    int a,sogio,sophut,sogiay;
    scanf ("%d", &a);
    sogio= a/3600;
    sophut=a%3600/60;
    sogiay=a%3600%60;
    printf ("%d %d %d \n" , sogio, sophut, sogiay);
    //nhap so giay in ra gio phut giay tt
    return 0;
}



