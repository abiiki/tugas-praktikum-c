#include <stdio.h>

int main()
{
	int A, B, C;
	
	printf("masukkan nilai A : ");
	scanf (" %i", &A);
	printf("masukkan nilai B : ");
	scanf (" %i", &B);
	printf("masukkan nilai C : ");
	scanf (" %i", &C);
	
	
	if (A > B && A > C){
		printf (" nilai terbesar adalah %i = A", A);
	}
	
	else if (B > A && B > C){
		printf ("nilai terbesar adalah %i = B" , B);
	}
	
	else if (C > A && C > B){
		printf ("nilai terbesar adalah %i = C", C);
	}
	
	return 0;
	
}