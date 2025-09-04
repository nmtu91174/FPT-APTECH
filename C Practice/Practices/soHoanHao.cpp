#include <stdio.h>
#include <math.h>
//Nh?p 1 s? nguyên n, ki?m tra xem n có ph?i s? hoàn h?o hay không (s? hoàn ho?n là s? b?ng t?ng các u?c nh? hon c?a nó)

int main(){
	
	int n;
	
	printf("Nhap vao mot so n: ");
	scanf("%d", &n);
	
	if(n<=1){
		printf("n(%d) khong phai la so hoan hao\n", n);
		return 0;
	}
	
	int sum=1;
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i){
				sum+=n/i;
			}
		}
	}
	
	if(sum==n){
		printf("\nn(%d) la so hoan hao!",n);
	}else {
			printf("\nn(%d) khong la so hoan hao!", n);
		}
		
	return 0;
	
	
}
