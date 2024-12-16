#include <stdio.h>

int main(){
	int y;	printf("Hay nhap so nam: ");	
	scanf("%d", &y);
	if(y > 0){
		if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0)	
		printf("%d la nam nhuan",y);
		
		else	printf("%d khong phai la nam nhuan",y);
	}
	else	printf("%d khong phai so nam hop le",y);
}
