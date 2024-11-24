#include<stdio.h>
int main(){
	float a,b,c;
	printf("Canh a la: ");
	scanf("%f",&a);
	printf("Canh b la: ");
	scanf("%f",&b);
	printf("Canh c la: ");
	scanf("%f",&c);
	
	if(a + b > c && a + c > b && b + c > a){
		printf("DAY LA 3 CANH TAM GIAC");
	}else{
		printf("DAY KHONG PHAI LA 3 CANH TAM GIAC");
	}
	return 0;
}
