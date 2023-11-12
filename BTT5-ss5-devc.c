#include <stdio.h>
int main(){
int t,n;
	printf("nhap thang:");
	scanf("%d",&t);
	printf("nhap ngay:");
	scanf("%d",&n);
	if(t==3&&n>=21&&n<31||t==4&&n<=20&&n>0){
	printf("cung bach duong");
	}else if(t==4&&n>=21&&n<30||t==5&&n<=20&&n>0){
	printf("cung kim nguu");
	}else if(t==5&&n>=21&&n<31||t==6&&n<=21&&n>0){
	printf("cung song tu");
	}else if(t==6&&n>=22&&n<30||t==7&&n<=22&&n>0){
	printf("cung cu giai");
	}else if(t==7&&n>=23&&n<31||t==8&&n<=22&&n>0){
	printf("cung su tu");
	}else if(t==8&&n>=23&&n<31||t==9&&n<=22&&n>0){
	printf("cung su nu");
	}else if(t==9&&n>=23&&n<30||t==10&&n<=23&&n>0){
	printf("cung thien binh");
	}else if(t==10&&n>=24&&n<31||t==11&&n<=22&&n>0){
	printf("cung bo cap");
	}else if(t==11&&n>=23&&n<30||t==12&&n<=21&&n>0){
	printf("cung nhan ma");
	}else if(t==11&&n>=23&&n<30||t==1&&n<=19&&n>0){
	printf("cung ma ket");
	}else if(t==1&&n>=20&&n<31||t==2&&n<=18&&n>0){
	printf("cung bao binh");
	}else if(t==2&&n>=19&&n<29||t==3&&n<=30&&n>0){
	printf("cung song ngu");
	}
}
	
