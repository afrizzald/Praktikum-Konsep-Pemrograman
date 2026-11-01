#include <stdio.h>

#define MAX_DATA 100

int input(int nilai[])
{
    int jumlah;

    printf("Masukkan jumlah data (1-%d): ", MAX_DATA);
    if (scanf("%d", &jumlah) != 1 || jumlah < 1 || jumlah > MAX_DATA) {
        printf("Jumlah data tidak valid.\n");
        return 0;
    }

    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        if (scanf("%d", &nilai[i]) != 1) {
            printf("Input nilai tidak valid.\n");
            return 0;
        }
    }

    return jumlah;
}

int findmax(int nilai[], int jumlah)
{
    int terbesar = nilai[0];

    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > terbesar) {
            terbesar = nilai[i];
        }
    }

    return terbesar;
}

int main(void)
{
    int nilai[MAX_DATA];
    int jumlah = input(nilai);

    if (jumlah == 0) {
        return 1;
    }

    printf("Nilai terbesar adalah: %d\n", findmax(nilai, jumlah));
    return 0;
}
