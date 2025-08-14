
/* 	Nguyen Manh Tu - T2507E
	Homwork Session 7 - ASM 6 */	

#include <stdio.h>
#include <stdlib.h>


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

// Tinh trung binh cong cac so le trong mang n so
 
void TBC_Sole(int a[], int n){

	int demSole = 0;
	int tong = 0;
	float TBC_Sole;
	
	for(int i=0; i<n; i++){

		if(a[i] % 2 != 0){
			demSole++;
			tong = tong + a[i];
		}
	}
	
	TBC_Sole = (float)tong/demSole;
	
	printf("\nTBC cac so le la: %.2f = tong so le: %d / so so le: %d", TBC_Sole, tong, demSole);
}

// Tinh trung binh cong cac so le o vi tri chan trong mang n so

void TBC_Sole_viTrichan(int a[], int n){
	int demSole = 0;
	int tong = 0;
	float TBC_Sole;
	printf("\nVi tri xuat hien so le la: ");
	
	for(int i=0; i<n; i++){
		
		if(a[i] % 2 != 0 && i % 2 == 0){
			
			demSole++;
			tong = tong + a[i];
			printf("%d ", i);
		}
		
	}
	
	TBC_Sole = (float)tong/demSole;
	
	printf("\n-------------\n");
	printf("\nTBC cac so le o vi tri chan la: %.2f = tong so le: %d / so so le: %d\n", TBC_Sole, tong, demSole);
}

// Nhap vao mot so x va tim xem x co trong mang khong

void nhapX_timX(int a[], int n){
	
	int x, i;
	int dem = 0;
	
	printf("\nNhap vao mot so bat ky: ");
	scanf("%d", &x);
		
	printf("\n\n-------------\n");
	printf("\nx Xuat hien o vi tri: ");
	for(int i=0; i<n; i++){
		
		if(a[i] == x){
			dem++;
			printf("%d ", i);
		}
	} 
	
	if(dem>0){
		
		
		printf("\nx co trong mang va xua hien %d lan!", dem);
		printf("\n\n-------------\n");
		
	} else {
		
		printf("\nx khong co trong mang!");
		printf("\n\n-------------\n");
		}
}

// Tim so le cuoi cung

void tim_soLe_cuoiCung(int a[], int n){
	
	for(int i=n-1; i>=0; i--){
		if(a[i]%2!=0){
			
			printf("\n-------------------------\n");
			printf("\nSo le cuoi cung la: %d\n", a[i]);
			break;
		}
	}
}

// Tim so duong nho nhat

void soDuongMin(int a[], int n){
	
	int Min, i;
	int dem = 0;
	
	for(i=0; i<n; i++){
		if(a[i]>0){
		dem++;
		break;
		} 
	}
		
	if(dem != 0){
	
		for(int i=0; i<n; i++){
		
			if(a[i] > 0 && a[i] < Min){
				Min = a[i];
			}
		}	
			printf("\nSo duong nho nhat la: %d", Min);
			printf("\n-------------------------\n");	
	}
}
	


int main(){
	int n, chon;
	
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
		
	do{
		printf("\n");
		printf("1. Nhap mang\n");
		printf("2. Xuat mang\n");
		printf("3. Tinh TBC cac so le\n");
		printf("4. Tinh TBC cac so le o vi tri chan\n");
		printf("5. Nhap vao x va tim x trong mang\n");
		printf("6. Tim so le cuoi cung cua mang\n");
		printf("7. Tim so duong nho nhat\n");
		
		printf("\n-------------\n");
		printf("\nHay chon menu: ");
		scanf("%d", &chon);
		printf("\n-------------\n");
		
		system("cls");
		
		switch(chon){
			
			case 1:{
				nhapMang(a,n);
				printf("\n-------------\n");
				break;
			}
			case 2:{
				xuatMang(a,n);
				printf("\n-------------\n");
				break;
			}
				
			case 3:{
				TBC_Sole(a,n);
				printf("\n-------------\n");
				break;
			}
				
			case 4:{
				TBC_Sole_viTrichan(a,n);
				printf("\n-------------\n");
				break;
			}
			
			case 5:{
				nhapX_timX(a,n);
				break;
			}
			
			case 6:{
				tim_soLe_cuoiCung(a,n);
				break;
			}
			
			case 7:{
				soDuongMin(a,n);
				break;
			}
			
			case 0:{
				exit(0);
				break;
			}
				
			default:
			printf("\nHay chon dung case!");
			printf("\n-------------\n");
		}
		
		
							
	}while(chon!=0);
}
	
	
	

