#include <stdio.h>
#include <math.h>
int main() {
 
    float alas, tinggi, sisi_miring;

    printf("masukkan panjang alas : ");
    	scanf("%f", &alas);
    printf("masukkan panjang tinggi : ");
    	scanf("%f", &tinggi);

    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    printf("Panjang sisi miring segitiga siku-siku adalah: %.2f cm\n", sisi_miring);

    return 0;
}
