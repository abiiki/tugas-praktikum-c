#include <stdio.h>

int main() {
    int nilai[10]; 
    int i;

    printf("Masukkan daftar nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        printf("Mahasiswa ke-%d dengan nilai : ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDaftar mahasiswa yang lulus :\n");
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa ke-%d dengan nilai:%d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}