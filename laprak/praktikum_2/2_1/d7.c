#include <stdio.h>

#define PI 3.14f

int main()
{
    float r, luas;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    luas = PI * r * r;

    printf("Luas lingkaran = %.2f\n", luas);

    return 0;
}