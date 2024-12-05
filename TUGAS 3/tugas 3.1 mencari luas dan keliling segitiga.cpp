#include <stdio.h>
int main(){
	
	float panjang, alas, tinggi, keliling, luas;
	
	printf ("LUAS DAN KELILING SEGITIGA \n");
	printf ("panjang : ");
		scanf ("%f", &panjang);
	printf ("alas :");
		scanf ("%f", &alas);
	printf ("tinggi : ");
		scanf ("%f", &tinggi);
		
	keliling = panjang + alas + tinggi;
	luas = 0.5 * alas * tinggi;
	
	printf ("\n keliling = %2.f cm", keliling);
	printf ("\n luas = %2.f cm", luas);
	return 0;
}