#include<stdio.h>
int main(){
	int age;
	printf("Moi ban nhap so nguyen  ");
	scanf("%d",&age);
	
	if(age > 0 ){
		printf("%d  la so duong",age); 
	} else{
		printf("%d  la so am",age); 
	} 
	 
	 return 0; 
} 
