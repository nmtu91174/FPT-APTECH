#include <stdio.h>

int main(){
	
	int a[5] = {23, 90, 9, 25, 16};
	
		
	for(int j=1; j<5; j++){
		
		int i = j-1;
		int temp = a[j];
		
		while(i>=0 && (temp < a[i])){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = temp;
	}
	
	for(int i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
	
	return 0;
}
