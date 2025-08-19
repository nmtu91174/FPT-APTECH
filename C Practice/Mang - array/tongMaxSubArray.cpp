#include <stdio.h>

void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
			
			printf("\nNhap phan tu thu [%d]: ", i+1);
			scanf("%d", &a[i]);
		}	
}

void xuatMang(int a[], int n){
	
	printf("\n-------------\n");
	printf("\nCac phan tu da nhap la: ");
	
	for(int i=0; i<n; i++){	
		printf("%d ", a[i]);
	}
	printf("\n-------------\n");
}

struct ket_qua{
	int tong;
	int start;
	int end;
};

int tinhTong(int a[], int start, int end){
	int tong = 0;
	for(int k = start; k <= end; k++ ){
		tong += a[k];
	}
	return tong;
} 

ket_qua timTongConCoTongMax(int a[], int n){
	//int max = a[0];
	
	ket_qua kq;
	
	kq.tong = a[0];
	kq.start = 0;
	kq.end = 0;
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int tong = tinhTong(a, i ,j);
			if(tong>kq.tong){
				kq.tong = tong;
				kq.start = i;
				kq.end = j;
			}
		}
	}
	return kq;
}



int main(){
	
	int n;
	
	do{
		printf("\nNhap so phan tu cho mang: ");
		scanf("%d", &n);
		
		if(n<=0){
			
			printf("\nBan phai nhap vao so nguyen va lon hon 0!");
			printf("\n-------------\n");
			while (getchar() != '\n');
				
		}
	} while(n<=0);
	
	int a[n];

	nhapMang(a, n);
	xuatMang(a, n);
	
	ket_qua k = timTongConCoTongMax(a, n);
	
	printf("\nTong cua day con lien tuc Max: %d", k.tong);
	printf("\nTu vi tri a[%d] den vi tri a[%d]", k.start, k.end);
}
