#include <stdio.h>

int main(){

	float a;
	float b;
	float x;
	
	printf("nhap a,b de giai phuong trinh ax+b=0:\n");
	
	printf("nhap a: ");
	scanf("%f",&a);
	printf("nhap b: ");
	scanf("%f",&b);
		
	if (a!=0){
		x = -b/a;
		printf("nghiem cua he phuong trinh ax+b=0 la: %f",x);
		}
			else {
					printf("he phuong trinh ax+b=0 vo nghiem");
				}
}
