#include <stdio.h>

int main(){

	int n, S, i;
	
	printf("Nhap n de tinh tong cua day so tu nhien: ");
	scanf("%d",&n);
	
	S = 0;
	
//	while (i<=n){
//		S = S + i;
//		i++;
//	}
		
	for (int i=0; i<=n; i++){
		
		S += i;
		
	}	
	
	printf("Display S = %d", S);
//	
	return 0;

}
