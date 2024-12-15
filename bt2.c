#include <stdio.h>

int main() {
    int number;

    printf("Hay nhap mot so nguyen: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d la mot so chan.\n", number);
    } else {
        printf("%d la mot so le.\n", number);
    }

    return 0;
}