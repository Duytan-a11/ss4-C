#include <stdio.h>

int main() {
    int number;
    
     printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("Ban vua nhap mot so duong.\n");
    } else if (number < 0) {
        printf("Ban vua nhap mot so am.\n");
    } else {
        printf("Ban vua nhap so 0.\n");
    }

    return 0;
}