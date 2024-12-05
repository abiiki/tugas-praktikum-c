#include <stdio.h>

int main() {
    int a;

	printf("MENENTUKAN BILANGAN GANJIL DAN GENAP. \n ");
    printf("Masukkan sebuah bilangan: ");
    scanf("%i", &a);

    if (a % 2 == 0) {
        printf("%i = Bilangan GENAP.\n", a);
    } else {
        printf("%i = Bilangan GANJIL.\n", a);
    }

    return 0;
}
