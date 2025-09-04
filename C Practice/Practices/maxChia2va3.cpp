#include <stdio.h>

//Nh?p 1 s? nguyên n, tìm s? l?n nh?t nh? hon n và chia h?t cho c? 2 và 3

int main(){
	
	int n, i;
	
	printf("Nhap vao mot so n: ");
	scanf("%d",&n);
	
	int max=0;
	
	for(int i=n-1;i>0;i--){
		if(i%6==0){
			max=i;
			break;
		}
	}
	printf("\nSo lon nhat nho hon n(%d) chia het cho ca 2 va 3 la: %d",n,max);
}
