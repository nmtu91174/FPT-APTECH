#include <stdio.h>

int main(){

	int a;
	int b;
	int c;
	
	printf("Hay nhap cac canh cua tam giac:\n");
	
	printf("Nhap canh a: ");
	scanf("%d",&a);
	printf("Nhap canh b: ");
	scanf("%d",&b);
	printf("Nhap canh c: ");
	scanf("%d",&c);
	
	if (a+b>c && b+c>a && c+a>b){
		printf("Ba doan thang tao thanh hinh tam giac!");
	}
		
		else {
				printf("Ba doan thang khong tao thanh hinh tam giac!");
		}
}
