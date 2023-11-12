#include <stdio.h>
int main(){
	int a;
	printf("nhap so phut:");
	scanf("%d", &a);
	if(0<=a && a<=50){
		printf("so tien phai tra la: %d", a*600;
	}else if(50<a && a<=200){
		printf("so tien phai tra là: %d", (a - 50) * 600 + 50 * 600); 
	}else if(200 < a && a<= 400){
		printf("so tien phai tra la: %d", (a-200)*200+(50*600)+(150*400)); 
	}else{
		printf("so tien phai tra la: %d",(a-400)*100+(50*600)+(150*400)+(200*200)); 
	} 
} 
