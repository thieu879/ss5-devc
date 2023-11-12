#include <stdio.h>
int main(){
	int a;
	printf("Nhap so doanh thu:");
	scanf("%d", &a);
	if(a<=100){
		printf("so tien hoa hong la: %f",(float) a * 0.05); 
	}else if(100<=a && a<=300){
		printf("so tien hoa hong la: %f",(float) a * 0.1); 
	}else{
		printf("So tien hoa hong la: %f",(float) a * 0.2); 
	}
} 
