#include <stdio.h>

float radian(float derajat) {
    return derajat * (3.14159265358979323846 / 180.0);
}

int main() {
    float derajat;

    printf("Masukkan nilai derajat: ");
    scanf("%f", &derajat);
    float hasil = radian(derajat);
    printf("%.2f derajat = %.2f radian\n", derajat, hasil);

    return 0;
}
