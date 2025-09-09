#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
	
//	int x=5, y=8;
//	int n=--x*y++;
//	printf("%3d%3d%3d",x,y,n);
	
	//for(;;)printf("hello!");
	
//	int a=8, b=9;
//	if(a%2=b%3) printf("\n%d %d",++a,b--);

//	int i,j,k,x=0;
//	for(i=1;i<5;i++)
//		for(j=0;j<i;++j){
//			switch(i+j){
//				case 0:x=x+1;
//					break;
//				case 1:
//				case 2:
//				case 3:x=x+2;
//					break;
//	
//			}
//		}
//	printf("%d",x);
		


	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int arr[1000], b[1000] = {0}, c[1000] = {0}; //Khoi tao 3 mang so nguyen
	int i;
	scanf("%d", &n); //Nhap so phan tu cua mang arr
	for(i = 0; i < n;i++)
		{
		scanf("%d", &arr[i]); // Nhap n phan tu mang so nguyen arr
		}
	for(i = 0; i < n;i++)
		{
		if(arr[i] > 0) //Mang so nguyen b[] ghi lai so lan xuat hien cua
		b[arr[i]]++; //cac phan tu lon hon 0 trong day arr
		if(arr[i] < 0) //Mang so nguyen c[] ghi lai so lan xuat hien cua
		c[-arr[i]]++; //cac phan tu nho hon 0 trong day arr
		}
	
	int max = 0;
	for(i = 0; i <n ;i++)
		{
		if(arr[i] > 0)
			{
			if(b[arr[i]] > max)
			max = b[arr[i]];
			}
			else
			{
			if(c[-arr[i]] > max)
			max = c[-arr[i]];
			}
	}		
		return 0;
}

