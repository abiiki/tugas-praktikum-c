#include <stdio.h>
#define SIZE 11

int main() {
    
    int A[SIZE] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;
    int found = 0;
      
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);
     
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    found = 0; 
    for(int i = 0; i < SIZE; i++) {
        if(A[i] == N) {
            if(!found) {
                printf("ADA\n");
                printf("Lokasi bilangan yang sama: ");
                found = 1;
            }
            printf("%d ", i);
        }
    }
    
    if(!found) {
        printf("TIDAK ADA\n"); 
    }
    
    return 0;
}