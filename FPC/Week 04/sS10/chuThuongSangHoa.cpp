#include <stdio.h>
#include <string.h>

//nhap cao 1 string, chuyen string do thanh in hoa het
//vi du aH13Me% ==>AH13ME%

int main(){
	
	char chuoi[200];
	printf("\nNhap chuoi:\n");
	fgets(chuoi,sizeof(chuoi),stdin);
	
	printf("\nChuoi vua nhap: %s", chuoi);
	
	for(int i = 0; chuoi[i]!='\0'; i++){
		if(chuoi[i]>= 'a' && chuoi[i]<='z'){
			chuoi[i] = chuoi[i] - ('a'-'A');
			//chuoi[i] = chuoi[i] - 32);
			
		}
	}
	
	printf("\nChuoi vua chuyen: %s", chuoi);
	
}
