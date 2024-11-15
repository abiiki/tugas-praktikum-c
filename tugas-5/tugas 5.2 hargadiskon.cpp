#include <stdio.h>

int main() {
    char kode[10], jenis;
    float harga, diskon = 0.0, hargaSetelahDiskon;

    printf("KODE: ");
    scanf("%s", kode);
    printf("JENIS: ");
    scanf(" %c", &jenis); 
    printf("HARGA: ");
    scanf("%f", &harga);

    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.10;
        printf("jenis barang A mendapat diskon 10%%, ");
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15;
		printf("jenis barang B mendapat diskon 15%%, "); 
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.20; 
        printf("jenis barang C mendapat diskon 20%%, ");
    } else {
        printf("anda tidak mendapat diskon");
    }

    
    hargaSetelahDiskon = harga - (harga * diskon);

    
    printf("Harga Setelah Diskon: %.2f\n", hargaSetelahDiskon);

    return 0;
}
