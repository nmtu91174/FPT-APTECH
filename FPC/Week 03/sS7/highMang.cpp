#include <stdio.h>

int main(){
	
	int a[10];
	int n, total, high, min;
	
	printf("\NNhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		
		printf("\nNhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n-------------\n");
	printf("\nCac phan tu da nhap la: "); 
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}		
	printf("\n\n-------------\n");
	
	high = a[0];
	
	for(int i=1; i<n; i++){
		
		if(a[i]>high){
			
			high = a[i];
			}
			
	}
	
	printf("\nHigh la: %d", high);
	printf("\n\n-------------\n");
	
	int max2 = high;
	for(int i=1; i<n; i++){
		
		if(a[i]<high){
			max2 = a[i];
			break;
		}
	}
	
	if(high == max2){
		printf("Mang toan high");
	} 
		else {	
	
			for(int i=1; i<n; i++){
				
				if(a[i]>max2 && a[i]<high){
					max2 = a[i];
				}
			}
		}
	
	printf("\nMax2 la: %d", max2);
	printf("\n\n-------------\n");
	
	min = a[0];
	
	for(int i=0; i<n; i++){
		
		if(a[i]<min){
			min = a[i];
		}
	}
	
	printf("\nmin la: %d", min);
	printf("\n\n-------------\n");

	
	for(int i=0; i<n; i++){
		
		total = total + a[i];
	}
	printf("\ntotal: %d", total);
	printf("\n\n-------------\n");
	
//	for(int i=0, i<n-1, i++){
//		
//		int tg;
//		for(int j=i+1, j<n, j++)
//		if(a[i])
//		
	
	
	return 0;
}			
			
	
	
	
