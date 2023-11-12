#include <stdio.h>
#include <math.h> 
int main(){
	int a, b, c;
	float dt; 
	printf("nhap cac so a, b, c:");
	scanf("%d %d %d", &a, &b, &c);
	if(a==0){
		if(b==0 && c==0){
			printf("phuong trinh co vo so nghiem");
		}else if(b==0 && c!=0){
			printf("phuong trinh vo nghiem"); 
		}else if(b!=0 && c!=0){
			printf("phuong trinh co nghiem x=-%d/%d", c, b); 
		}else if(b!=0 && c==0){
			printf("phuong trinh co 1 nghiem x=0"); 
		} 
	}else if(a!=0){
		if(b==0 && c!=0){
			printf("phuong trinh vo nghiem");
		}else if(b==0 && c==0){
			printf("phuong trinh co nghiem x=0"); 
		}else if(b!=0 && c==0){
			printf("phuong trinh co 2 nghiem x=0 va x=-%d/%d", b, a); 
		}else if(b!=0 && c!=0){
			dt = (b*b) - (4*a*c); 
			if(dt<0){
				printf("phuong trinh vo nghiem"); 
			}else if(dt==0){
				printf("phuong trinh co nghiem kep x = %f",(float) -b/(2*a));
			}else printf("phuong trinh co 2 nghiem phan biet la %d va %d ", (-b+(sqrt(dt))) / (2*a), (-b-(sqrt(dt))) / (2*a));
		} 
	}
} 
