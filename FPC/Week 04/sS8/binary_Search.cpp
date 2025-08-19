#include <stdio.h>

int main(){
	
	int a[] = {0, 11, 13, 14, 15, 17, 18};
	int low = 0;
	int high = 6;
	int searchValue = 15;
	int flag = 0;
	
	while(low < high){
		int mid = low + (high - low)/2;
		if(searchValue == a[mid]){
			flag = 1;
			printf("found at index %d\n", mid);
			break;
		}  else if(searchValue < a[mid]){
			high = mid-1;
		} else if(searchValue > a[mid]){
			low = mid - 1;
		}
		
	}
	if(flag == 0){
		printf("Not found!");
	}
	
	return 0;
}
