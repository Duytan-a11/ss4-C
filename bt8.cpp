#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap vao canh a:");	
	scanf("%d", &a);
	printf("Nhap vao canh b:");	
	scanf("%d", &b);
	printf("Nhap vao canh c:");	
	scanf("%d", &c);
	
	if(a + b > c && a + c > b && b + c > a)
		printf("Day la 3 canh cua tam giac!");
	
	else	printf("Day khong phai 3 canh cua tam giac!");
}
