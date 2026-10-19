#include <stdio.h>

int ganjil(int bilangan);

int main(void)
{
    int bilangan;

    printf("Masukkan sebuah bilangan bulat: ");
    if (scanf("%d", &bilangan) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    if (ganjil(bilangan)) {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    } else {
        printf("%d adalah bilangan genap.\n", bilangan);
    }

    return 0;
}

int ganjil(int bilangan)
{
    return bilangan % 2 != 0;
}
