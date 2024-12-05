#include <stdio.h>

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%i", &N);

    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    printf("N = %i\n", N);

    return 0;
}