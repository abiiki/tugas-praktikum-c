#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11]; 
    int n = sizeof(data) / sizeof(data[0]);
    int i, j, count;

    // Bagian a
    count = 0;
    for (i = 0; i < n && data[i] != 999 && count < 11; i++) {
        A[count++] = data[i];
    }
    printf("Isi array A (a): ");
    for (j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // Bagian b
    count = 0;
    for (i = 0; i < n && data[i] != 999 && count < 11; i++) {
        if (data[i] > 9) {
            A[count++] = data[i];
        }
    }
    printf("Isi array A (b): ");
    for (j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // Bagian c
    count = 0;
    for (i = 0; i < n && data[i] != 999 && count < 11; i++) {
        if (data[i] > 9) {
            A[count++] = data[i];
        }
    }
    printf("Isi array A (c): ");
    for (j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // Bagian d
    count = 0;
    for (i = 0; i < n && data[i] != 999 && count < 11; i++) {
        if (data[i] % 2 != 0) {
            A[count++] = data[i];
        }
    }
    printf("Isi array A (d): ");
    for (j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // Bagian e
    count = 0;
    for (i = 0; i < n && data[i] != 999 && count < 11; i++) {
        if (data[i] % 2 != 0) {
            A[count++] = data[i];
        }
    }
    printf("Isi array A (e): ");
    for (j = 0; j < count; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}
