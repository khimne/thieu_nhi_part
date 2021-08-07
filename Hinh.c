#include<stdio.h>
int main(){
	int a, b;
	printf("nhap 2 kich thuoc phong hoc");
	scanf ("%d%d", &a, &b);
	int cotDen, hangDen ;
	if (a%2==1){
		cotDen=(a+1)/2;
	}
	if (a%2==0){
		cotDen=a/2;
	}
	if (b%2==1){
		hangDen=(b+1)/2;
	}
	if (b%2==0){
		hangDen=b/2;
	}
	int oSon=a*b-cotDen*hangDen;
	int sum = cotDen*hangDen*50000+oSon*10000;
	printf("gia tien tan trang phong hoc la %d", sum);
	 return 0;
}
