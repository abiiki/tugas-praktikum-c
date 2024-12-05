#include <stdio.h>

int main() {

    int i = 1;

    while (i <= 1024) {
        printf("%d ", i);
        i *= 2;
    }

    printf("\n");

    return 0;
}
