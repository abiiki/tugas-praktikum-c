#include <stdio.h>

int main ()

{

	int jm, jp, lama_bekerja;
	
	printf("Masukkan Jam MASUK (1-12) :");
	scanf("%i", &jm);
	printf("Masukkan Jam PULANG (1-12) :");
	scanf("%i", &jp);

		if (jp >= jm){
			lama_bekerja = jp - jm;
			printf ("Lama Anda Bekerja Adalah %i jam", lama_bekerja);
		}
			
			
		else {
			lama_bekerja = (jp + 12) - jm;
			printf ("Lama Anda Bekerja Adalah %i jam", lama_bekerja);
		}




}