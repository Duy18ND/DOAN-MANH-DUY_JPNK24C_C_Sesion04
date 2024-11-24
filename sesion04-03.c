#include<stdio.h>
int main(){
	int integer;
	 printf("Moi ban nhap vao so nguyen bat ky  ",integer);
	 scanf("%d",&integer);
	
	  if(integer % 3 == 0 && integer % 5 == 0 ){
	  	printf("So  %d  chia het cho ca 3 va 5",integer);
	  } else if (integer % 3 == 0){
	  	printf("So %d chia het cho 3",integer); 
      }	else if (integer % 5 == 0){
      	printf("So %d chia het cho 5",integer); 
	  } else {
	  	printf("So nguyen cua ban khong chia het cho ca 3 va 5"); 
	  } 
      
	   return 0; 
} 
