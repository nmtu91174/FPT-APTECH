#include <stdio.h>


bool ktSoNguyenTo(int n){
	
	if(n<2){
	return false;
	}
	if(n==2 || n==3){
		return true;
	}
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return false;
		}
	}
}


void printArray(int a[], int size){
	for(int i=0; i<n; i++){
		printf("%d \t", a[i]);
	}
}

int main(){
	
	int x;
	
	printf("\nNhap x: ");
	scanf("%d", &x);
	
	if(ktSoNguyenTo(x)){
		printf("\nLa so nguyen t0");
	} else {
		printf("\nkhong so nguyen t0");
	}
}
