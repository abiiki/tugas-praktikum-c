#include <stdio.h>

int main() {
    int jm, jk, lamaparkir, biaya;


    printf("Masukkan jam masuk: ");
    scanf("%i", &jm);
    printf("Masukkan jam keluar: ");
    scanf("%i", &jk);

    lamaparkir = jk - jm;

    if (lamaparkir <= 0) {
        lamaparkir = (jk + 12) - jm;
    }

 
    if (lamaparkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lamaparkir - 2) * 500; 
    }

    printf("Lama parkir: %d jam\n", lamaparkir);
    printf("Biaya parkir: %d\n", biaya);

    return 0;
}
