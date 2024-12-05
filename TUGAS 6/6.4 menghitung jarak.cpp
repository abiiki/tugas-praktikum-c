#include <stdio.h>

int main() {

    int kecepatan = 2;
    int waktu = 100;
    int jarak = 0;
    int detik = 0;

    while (detik < waktu) {
        jarak += kecepatan;
        detik++;
    }

    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}
