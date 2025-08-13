#include <stdio.h>

int main(){
	
	int a[100];
	int n;
	
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}		
	printf("\n\n-------------\n");

	for(int i=0; i<n-1; i++){
		
		for(int j=i+1; j<n; j++){
			
			if(a[i]>a[j]){
				
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}	
		}
	}
	
	printf("\nCac phan tu da xep tang dan la: ");
	
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n\n-------------\n");	
	
	for(int i=0; i<n-1; i++){
		
		for(int j=i+1; j<n; j++){
			
			if(a[i]<a[j]){
				
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}	
		}
	}
	
	printf("\nCac phan tu da xep giam dan la: ");
	
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);	
	}
	
	return 0;
	
	
}
