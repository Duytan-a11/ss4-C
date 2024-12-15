#include <stdio.h>
#include <iostream>

int main(int argc, char** argv) {
	int month;
	printf("Nhap vao so thang: ");
	scanf("%d",&month);
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay\n",month);
			break;
		case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay\n", month);
            break;
        case 2:
            printf("Thang %d co 28 ngay (hoac 29 ngay neu la nam nhuan)\n",month);
            break;
        default:
            printf("Thang khong hop le!\n");
            break;
	}
	return 0;
}
