#include <stdio.h>
#include <stdlib.h> //thu vien cap phat dong o nho: linh hoat kich thuoc cua mang

int main(){
//	int arr[10];
//	*(arr) = 6;
//	*(arr+1) = 9;

	int *player;
	
	// ban dau cap 10 o nho (10 phan tu)
	
	player = (int*)malloc(10* sizeof(int)); //cap phat chua don dep van con rac
	//player = (int*)calloc(10* sizeof(int)) //da don dep truoc khi cap phat
	
	
	for(int i=0; i<10; i++){
		printf("\nNhap gia tri player [%d]=\n", i);
		//scanf("%d", player+i);
		scanf("%d", &player[i]);
	}
	
	//cap lai thanh 15 o
	player = (int *)realloc(player, 15 * sizeof(int));
	
	for(int i=0; i<15; i++){
		printf("\nNhap gia tri player [%d]=\n",i);
		//scanf("%d", player+i);
		scanf("%d", &player[i]);
	}
	
	//giai phong bo nho
	free(player);
}
