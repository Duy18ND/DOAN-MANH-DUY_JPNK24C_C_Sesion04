#include<stdio.h>
int main(){
	int ngay, thang;
	printf("Moi ban nhap so thang (1-12) la:   ");
	scanf("%d",&thang); 
	switch (thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
			printf("Thang %d co 31 ngay",thang); 
			break;
		}  
		case 4: case 6: case 9: case 11:{
			printf("Thang %d co 30 ngay",thang); 
			break;
		}  
		case 2:{
			printf("Thang %d co 28 ngay ",thang); 
			break;
		} 
		default:{
		printf("LOI HE THONG");
		} 
	} 
	return 0; 
} 
