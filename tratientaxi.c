#include<stdio.h>
int main(){
        float s;
        int t;
        scanf("%f",&s);
        if (s>=0 && s<=0.8 )
        {
            t=10000;
        }
        else if  (s<=30.8)
        {
            t=10000+(s-0.8)*9000;
        }
        else
        {
            t=10000+30*9000+(s-30.8)*8000;
        }
        t=t/1000;
        t=t*1000;
        printf("%d",t);

    return 0;
}
