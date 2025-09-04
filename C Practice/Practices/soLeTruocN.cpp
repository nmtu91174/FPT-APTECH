#include <stdio.h>

int main(){
	
	int n, i;
	
	printf("Nhap vao mot so n: ");
	scanf("%d",&n);
	
	printf("\nSo le nho hon n(%d) la:",n);
	
	for(i=0; i<n; i++){
		if(i%2!=0){
			printf("%3d",i);
		}
	}
}

