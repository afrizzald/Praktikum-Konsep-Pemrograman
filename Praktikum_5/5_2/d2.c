#include <stdio.h>

long int faktorial(int n) {
    long int hasil = 1;

    if (n < 0) {
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }

    return hasil;
}

int main(void) {
    int n;

    printf("Masukkan bilangan bulat non-negatif: ");
    if (scanf("%d", &n) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    long int hasil = faktorial(n);
    if (hasil == -1) {
        printf("Bilangan harus non-negatif.\n");
        return 1;
    }

    printf("%d! = %ld\n", n, hasil);
    return 0;
}
