#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
    void nhap(int a[], int n)
    {
        for (int i=0; i<n; i++)
        {
            printf("Nhap vao phan tu a[%d]: ",i);
            scanf ("%d", &a[i]);
        }
    }
    int max (int a[], int n)
    {
        int max = a[0];
        for (int i=0; i<n; i++)
            max = a[i]>max?a[i]:max;
        return max;
    }
    int main (){

        int a[100];
        int n;
        printf("\nNhap n= ");
        scanf("%d", &n);
        nhap(a,n);
        printf("\nMax=%d ",max(a,n));
        return 0;

        }


