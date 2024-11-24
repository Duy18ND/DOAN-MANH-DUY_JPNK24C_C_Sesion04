#include<stdio.h>
int main(){
	int dauthang, cuoithang, sum; 
	double VND; 
	printf("Nhap so dien dau thang ");
	scanf("%d",&dauthang);
	printf("Nhap so dien cuoi thang");
	scanf("%d",&cuoithang);
	 
	  sum = cuoithang - dauthang;
	  printf("Tong so dien tieu thu trong thang la : %d \n ",sum); 
	 
	if(cuoithang < dauthang){
		printf("LOI HE THONG!!!");
		return 1;
	}else if(0 <= sum && sum < 50){
		VND = sum  * 1.000;
		printf("Tong so tien dien thang nay la : %d * 1000 = %.3f VND",sum,VND); 
	} else if(50< sum && sum < 100 ){
		VND = sum * 1.500;
		printf("Tong so tien dien thang nay la :  %d * 1500 = %.3f VND",sum,VND); 
	} else if(100 < sum && sum < 150){
		VND = sum * 2.000;
		printf("Tong so tien dien thang nay la : %d * 2000 = %.3f VND",sum,VND);		
	} else if(150 < sum && sum < 200){
		VND = sum * 2.500;
		printf("Tong so tien dien thang nay la : %d * 2500 = %.3f VND",sum,VND);
	} else{
		VND = sum * 3.000;
		printf("Tong so tien dien thang nay la : %d * 3000 = %.3f VND",sum,VND);
	}
	
	return 0;
} 
