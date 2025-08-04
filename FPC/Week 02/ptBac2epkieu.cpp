#include <stdio.h>

int main(){
	
	int a;
	int b;
	float x;
	
	printf("Nhap so hang cua phuong trinh ax+b=0:\n");
	printf("Nhap so hang a:");
	scanf("%d",&a);
	printf("Nhap so hang b:");
	scanf("%d",&b);
	
	if (a!=0){
		x = -b/(float)a;
		printf("Nghiem cua phuong trinh la: %.2f",x);
	}
		else if (b==0){
			printf("Phuong trinh co vo so nghiem!");
		}
			else {
				printf("Phuong trinh vo nghiem!");
			}
	return 0;
}			
