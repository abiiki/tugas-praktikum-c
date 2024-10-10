#include <stdio.h>
int main() {

    int bilangan;

    printf("masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}
