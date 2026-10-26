#include <stdio.h>

#define MAKS 100

int main(void)
{
    int A[MAKS];
    int n;

    printf("Masukkan jumlah A (1-%d): ", MAKS);
    if (scanf("%d", &n) != 1) {
        printf("Input harus berupa bilangan bulat.\n");
        return 1;
    }

    if (n < 1 || n > MAKS) {
        printf("Jumlah data harus antara 1 dan %d.\n", MAKS);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        if (scanf("%d", &A[i]) != 1) {
            printf("Data harus berupa bilangan bulat.\n");
            return 1;
        }
    }

    int terbesar = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > terbesar) {
            terbesar = A[i];
        }
    }

    printf("Nilai terbesar: %d\n", terbesar);

    return 0;
}