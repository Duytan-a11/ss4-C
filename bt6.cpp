#include <stdio.h>

int main(){
	float dau,cuoi,tiendien,sodien;
	printf("Nhap chi so cong to dien o dau thang:");	
	scanf("%f",&dau);
	printf("Nhap chi so cong to dien o cuoi thang:");	
	scanf("%f", &cuoi);
	
	sodien = cuoi - dau;
	
	if (sodien < 0) {
		printf("Khong hop le\n");
	}
	else if (sodien == 0)	
	    printf("Thang nay ban khong dung dien\n");
	
	else{
		if(sodien < 50)
			tiendien = sodien*10000;
		else if(sodien < 100)	
			tiendien = (50*10000)+(sodien - 50)* 15000;
		else if(sodien < 150)
			tiendien = 50*(10000 + 15000) + (sodien - 100)*20000;
		else if(sodien < 200)
			tiendien = 50*(10000 + 15000 + 20000) + (sodien - 150)*25000;
		else
			tiendien = 50*(10000 + 15000 + 20000 + 25000) + (sodien - 200)*30000;
        printf("Tien dien thang nay cua ban la: %.0f", tiendien);
	}
}
