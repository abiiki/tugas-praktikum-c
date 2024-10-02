#include <stdio.h>
#include <math.h>

int main() {
   
    float alas = 4.0; 
    float tinggi = 5.0; 
    float miring; 

    miring = sqrt((alas * alas) + (tinggi * tinggi));
    
    printf("SISI MIRING SEGITIGA SIKU-SIKU\n");
    printf("ALAS = %.2f cm\n", alas);
    printf("TINGGI = %.2f cm\n", tinggi);
    printf("SISI MIRING = %.2f cm\n", miring);

    return 0;
}
