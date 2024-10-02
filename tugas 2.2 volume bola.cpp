#include <stdio.h>

int main() {
	
    float diameter = 15; 
    float jari;
    float volume; 
    float phi;
    
	phi = 3.14159;
    jari = diameter / 2;
    volume = (4.0 / 3.0) * phi * (jari * jari * jari);

	printf("VOLUME BOLA\n");
    printf("DIAMETER = %.2f cm\n", diameter);
    printf("JARI JARI = %.2f cm\n", jari);
    printf("VOLUME = %.2f cm^3\n", volume);

    return 0;
}
