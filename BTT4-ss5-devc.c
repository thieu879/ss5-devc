#include <stdio.h>
int main(){
	int a;
	printf("So tien luong cua nhan vien:");
	scanf("%d", &a);
	if(0<a && a<=5){
		printf("so luon duoc nhan la: %f", (float) a - (a*0.05)); 
	}else if(5<a && a<=10){
		printf("So luong duoc nhan la: %f", (float) a - (a*0.1)); 
	}else if(10<a && a<=18){
		printf("So luong nhan duoc la: %f", (float) a - (a*0.15)); 
	}else if(18<a && a<=32){
		printf("So luong nhan duoc la: %f", (float) a - (a*0.2)); 
	}else if(32<a && a<=52){
		printf("So luon nhan duoc la: %f", (float) a - (a*0.25)); 
	}else if(52<a && a<=80){
		printf("So luong nhan duoc la: %f", (float) a- (a*0.3)); 
	}else{
		printf("So luong nhan duoc là: %f", (float) a - (a*0.35)); 
	} 
} 
