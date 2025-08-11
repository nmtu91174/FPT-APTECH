#include <stdio.h>

int main(){
	
	int n;
	int i;
	int s;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
//	while(i<n){
//		
////		if ( i % 2 != 0){
////			
////			printf("So le: %d\n", i);
////		}
//		
//		if (i % 6 == 0){
//			so = i;
//		}
//		i++;
//	}
//	
//	printf("So lon nhat nho hon n chia set cho 6: %d\n", so);
//}
	
	s = 0;

	while(i<n){
		
		if (n%i == 0){
			s = s + i;
			
		}
		i++;
	}
		if(s==n){
			
			printf("S la hoan hao!");
			
		} else {
			printf("S la khong hoan hao!");
		}
	
		
	return 0;		
	
	
}
