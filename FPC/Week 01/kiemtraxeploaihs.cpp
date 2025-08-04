#include <stdio.h>
#include <math.h>

int main(){
	
	float d;
	printf("Hay nhap diem cua sinh vien: ");
	scanf("%f",&d);
	
	if (d>=9) {
		printf("Hoc sinh xuat sac: %.1f\n",d);
		}
		
		else if (d>=7.5){
			printf("Hoc sinh xuat gioi: %.1f\n",d);
			}
		
			else if (d>6.5){
				printf("Hoc sinh kha: %.1f\n",d);
				}
				
				else if (d>=5.5){
					printf("Hoc sinh TB kha: %.1f\n",d);	
					}
					
					else if (d>=4.5){
						printf("Hoc sinh TB: %.1f\n",d);
						}
						
						else if (d>=3){
							printf("Hoc sinh yeu: %.1f\n",d);
							}
							
							else //if (d<3)
								{
								printf("Hoc sinh kem: %.1f\n",d);
								}
	
}
