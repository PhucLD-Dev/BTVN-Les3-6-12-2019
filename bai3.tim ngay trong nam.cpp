#include <stdio.h>
int main(){
	int ngay,thang;
	printf("hay nhap vao ngay thang");
	printf("\nNgay: ");
	scanf("%d",&ngay);
	printf("\nThang: ");
	scanf("%d",&thang);
	int a[13];
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
	a[2]=28;
	a[4]=a[6]=a[9]=a[11]=30;
	int x=0;
	for(int i=1;i<=12;i++){
		if(thang>i){
			x+=a[i];
		}
	}
	x+=ngay;
	int y = (x-1)%7;
	if(y==6){
		printf("Ngay %d, thang %d la ngay thu %d trong nam va la chu nhat",ngay,thang,x);
	}else{
		printf("Ngay %d, thang %d la ngay thu %d trong nam va la thu %d",ngay,thang,x,y+2);
	}
	return 0; 
}
