#include <stdio.h>

int main(){
	
	int n, i, s;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	s = 0;
	i = 1;
	
	while(i<n){
		
		if(n % i == 0){
			
			s = s + i;
		}
		
		i = i + 1;
	} 	
		
	if(s==n){
		
		printf("%d hoan hao!\n", n);
	}
	
	else {
		printf("%d Khong hoan hao\n", n);
	}
	
	return 0;
}
