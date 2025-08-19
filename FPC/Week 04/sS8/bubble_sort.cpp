#include <stdio.h>

int main(){
	
	int a[5] = {23, 90, 9, 25, 16};
	
	for(int i=0; i<5; i++){
		
		for(int j=0; j<5-1; j++){
			
			if(a[j] > a[j+1]){
				
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<5; ++i){
	
	printf("%d\t", a[i]);	
	}
	
	return 0;
}
