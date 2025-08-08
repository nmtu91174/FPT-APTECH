#include <stdio.h>

int main(){
	
	int d, m ,y;
	
	printf("Hay nhap vao ngay thang nam: \n");
	printf("\n");
	
	printf("Hay nhap vao ngay: ");
	scanf("%d",&d);
	
	printf("\n");
	printf("Hay nhap vao thang: ");
	scanf("%d",&m);
		
	printf("\n");
	printf("Hay nhap vao nam: ");
	scanf("%d",&y);	
	
	printf("\n");
	
	printf("ngay thang nam da nhap la: %d/%d/%d\n",d,m,y);
	printf("\n");
	
	int s = 0;
	
	for (int i=1; i<m; i++){
	if (m==2){
		if (y % 400 == 0 || (y % 4 ==0 && y % 100 != 0)){
			s = s + 29;
		} 					
		
		else {
				s = s + 28;
		}
	}
	else
		if (m==4 || m==6 || m==9 || m==11){
			s = s + 30;
		}
				
	else {
			s = s + 31;
		}
	}	
			
		s = s + d;
		printf("Ngay do la ngay thu: %d trong nam!", s);
		
		return 0;
}

