#include <stdio.h>

int main(){
	
	int d, m , y;
	
	printf("Nhap vao ngay, thang, nam: \n");
	scanf("%d%d%d",&d,&m,&y);
	
	printf("\nngay.thang.nam: %.2d.%d.%d",d,m,y);
	
	int dOy=d;
	for(int i=1; i<m; i++){
		if(i==2){
			if(y%4==0 && y%100!=0 || y%400==0){
				dOy+=29;
			} else dOy+=28;
		} else if(i==4 || i==6 || i==9 || i==11){
			dOy+=30;
			} else dOy+=31;
	}
		
	printf("\n\nNgay nhap la ngay thu %d cua nam", dOy);
}
