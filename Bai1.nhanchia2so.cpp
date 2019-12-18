#include<stdio.h>
int main(){
	int a,b;
	printf("nhap 2 so nguyen : \n");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a>=b){
		if (b==0){
			printf("ko the chia cho 0 \n");
		}
		printf("Vi a>=b nen a/b = %f \n", (float)a/b);
	}else{
	int h= a*b;
	printf("Vi a,b nen= %d \n", h);
}
return 0;}
