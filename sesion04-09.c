#include<stdio.h>
int main(){
	
	int ngay, thang, nam;
	printf("Moi ban nhap ngay sinh nhat cua ban  ");
	scanf("%d",&ngay);
	if(ngay > 0 && ngay <= 30){
	}else{
		printf("NGAY KHONG HOP LE!!!");
		return 1;
	}
		printf("Moi ban nhap thang sinh nhat cua ban ");
		scanf("%d",&thang);
	if(thang > 0 && thang <= 12){
	}else{
		printf("THANG KHONG HOP LE!!!");
		return 1;
	}
	printf("Moi ban nhap nam sinh nhat cua ban  ");
	scanf("%d",&nam);
	printf("Ngay %d Thang %d Nam %d",ngay,thang,nam);
	
	return 0;
}
