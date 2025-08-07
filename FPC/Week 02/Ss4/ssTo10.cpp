#include <stdio.h>

int main() {
	
	int a, b;
	int aTo10, bTo10;
	
	printf("Nhap so a: ");
	scanf("%d",&a);
	
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	if (a - 10 > 0){
		aTo10 = a -10;
		} else {
			aTo10 = -(a-10);
			}
	if (b - 10 > 0){
		bTo10 = b -10;
		} else {
			bTo10 = -(b-10);
			}
			
	if (aTo10 > bTo10){
		printf("\n");
		printf("b gan voi so 10 hon a!");
		
		} else if(aTo10 < bTo10){
			printf("\n");
			printf("a gan voi so 10 hon b!");
			
			} else {
				printf("\n");
				printf("Hai so bang nhau");
			}
	return 0;
}
