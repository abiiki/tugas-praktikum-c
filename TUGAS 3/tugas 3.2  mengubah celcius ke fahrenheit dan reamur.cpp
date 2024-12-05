#include <stdio.h>
int main() {

    int celcius, fahrenheit, reamur;

    printf("masukkan suhu celcius: ");
    	scanf("%i", &celcius);

    fahrenheit = (celcius * 9/5) + 32;
    reamur = celcius * 4/5;

    printf("fahrenheit : %i\n", fahrenheit);
    printf("reamur: %i\n", reamur);

    return 0;
}
