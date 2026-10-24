#include <stdio.h>

int main() {
    int tp;
    float p;

    printf("Masukkan total pembelian: Rp. ");
    scanf("%d", &tp);

    if (tp < 100000) {
        p = 0;
    } else {
        p = 0.05 * tp;
    }

    printf("Total pembelian adalah Rp. %d\n", tp);
    printf("Potongan harga yang diterima adalah Rp. %.0f\n", p);

    return 0;
}
