#include <stdio.h>
#include <string.h>

int main(){
//	char tk(1000);
//	
//	for(int i=0; i<1000; i++){
//	scanf("%c,&tk[i]");
//	}	
//		
//		printf("\nNhap string:\n");
//		scanf("%s",tk); //khong dung ky hieu & (dia chi) voi type %s
//		
//		printf("\nChuoi vua nhap: %s", tk);
//	

	char s1[20], s2[20];
	
	printf("Nhap s1:\n");
	scanf("%s", s1);
	
	printf("Nhap s2:\n");
	scanf("%s", s2);
	
	strcat(s1,s2); //hieu la s1 = s1 + s2
	strcat(s2,s1); //hieu la s2 = s2 + s1
	
	strcmp(s1,s2); //so sanh theo alphabet - giong nhau thi so sanh tiep, khac nhau thi dung
	
	strcpy(s1,s2); //hieu la s1 = s2;
	
	int l = strlen(s1); //tra ve do dai chuoi
}
