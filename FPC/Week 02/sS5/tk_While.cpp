#include <stdio.h>

int main(){

	int tk = 4000, y = 0;
	
//	while (y < 3){
//		//yes
//		tk = tk + tk*8/100;
//		y++;
//	}
//	
//	printf("Sau 3 nam thi tong tien la: %d\n", tk);

	while (tk < 1000000){
			//yes
			tk = tk + tk*8/100;
			y++;
		}
		
		printf("Sau %d nam thi tong tien la: 1M$\n", y);
	
	return 0;
}
