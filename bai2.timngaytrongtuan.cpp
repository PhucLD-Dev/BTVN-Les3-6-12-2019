#include<stdio.h>
int main (){
	int a;
	printf("nhap vao 1 so nguyen di ban ! : \n");
	scanf("%d", &a);
	if ((2<= a) && (a<=7)) {
	printf("Hom nay la thu : %d", a);}
	else
	 if ( a==8){
	printf ("Hom nay la Chu nhat nhe ban! \n");
	}else{
		printf("Hom nay khong phai ngay nao trong tuan");}
	
	return 0;
}
