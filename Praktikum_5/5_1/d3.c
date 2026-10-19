#include <stdio.h>

float kuadrat(float n) {
    return n*n;
    }

int main() {
    float n;

    printf("Masukkan nilai n: ");
    scanf("%f", &n);
    float hasil = kuadrat(n);
    printf("Bilangan kuadrat dari %.2f adalah %.2f\n", n, hasil);

    return 0;
}
