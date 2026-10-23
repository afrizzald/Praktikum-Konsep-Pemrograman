#include <math.h>
#include <stdio.h>

double hitungBC(double Derajat, double AB);

int main(void)
{
    double BAC, AB;

    printf("Masukkan besar sudut BAC (derajat): ");
    if (scanf("%lf", &BAC) != 1) {
        printf("Input sudut tidak valid.\n");
        return 1;
    }

    printf("Masukkan panjang sisi AB (meter): ");
    if (scanf("%lf", &AB) != 1) {
        printf("Input panjang sisi tidak valid.\n");
        return 1;
    }

    if (BAC <= 0.0 || BAC >= 90.0 || AB <= 0.0) {
        printf("Sudut BAC harus antara 0 dan 90 derajat, dan AB harus lebih besar dari 0.\n");
        return 1;
    }

    printf("Panjang sisi BC adalah %.2f meter\n", hitungBC(BAC, AB));

    return 0;
}

double hitungBC(double Derajat, double AB)
{
    double rad = Derajat * acos(-1.0) / 180.0;
    return AB * tan(rad);
}
