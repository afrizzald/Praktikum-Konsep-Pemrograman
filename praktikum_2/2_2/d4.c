#include <stdio.h>

int main()
{
    int jmTiket, jm3, sm3, biaya;

    printf("Masukkan jumlah tiket: ");
    scanf("%d", &jmTiket);

    jm3 = jmTiket / 3;
    sm3 = jmTiket % 3;

    biaya = jm3 * (2 * 50000) + sm3 * 50000;

    printf("Biaya yang harus dibayar = Rp %d\n", biaya);

    return 0;
}
