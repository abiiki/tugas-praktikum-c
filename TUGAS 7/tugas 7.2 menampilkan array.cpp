#include <stdio.h>

int main() {
    int A[11] = {0};
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i, x = 0;

    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[x] = data[i];   
            x++;              
        }
    }

    printf("Isi array A (hanya bilangan genap):\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}