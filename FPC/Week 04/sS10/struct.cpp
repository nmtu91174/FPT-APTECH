#include <stdio.h>
#include <string.h>

//tao kieu du lieu moi

typedef struct SinhVien{
		char ten[50];
		int tuoi;
		char sdt[15];
	}SV;

int main(){
	struct SinhVien sv1; //sv1 la 1 bien  variable
	
//	sv1.tuoi = 20;
//	scanf("%s",sv1.ten);
//	scanf("%s",sv1.sdt);
//	SV sv2;
//	sv2.tuoi=19;
	
	SV t2507e[5];
	for(int i=0; i<5; i++){
		printf("Nhap ten sv %d:\n",i);
		scanf("%s",t2507e[i].ten);
		printf("Nhap tuoi sv %d:\n",i);
		scanf("%d",&t2507e[i].tuoi);
		printf("Nhap sdt sv %d:\n",i);
		scanf("%s",t2507e[i].sdt);
	}
	//sap xep mang sv tang dan theo tuoi
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5-i-1;j++){
			if(t2507e[j].tuoi>t2507e[j+1].tuoi){
//				char ten[50];
//				int tuoi;
//				char sdt[15];
//				strcpy(ten,t2507e[j].ten);
//				tuoi = t2507e[j].tuoi;
//				strcpy

				SV temp;
				memcpy(&temp,&t2507e[j],sizeof(SV)); // hieu  temp = t2507e[j]
				memcpy(&t2507e[j],&t2507e[j+1],sizeof(SV));
				memcpy(&t2507e[j+1],&temp,sizeof(SV));
			}
		}
	}
	
	
	
}

//strcmp(ten , ten)>0
