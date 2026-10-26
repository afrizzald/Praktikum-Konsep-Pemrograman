#include <stdio.h>

int main(void)
{
    long long fibonacci[1000];
    int jumlahSuku = 0;
    int n;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        printf("Masukkan jumlah suku Fibonacci: ");
        if (scanf("%d", &n) != 1) {
            printf("Input harus berupa bilangan bulat.\n");
            return 1;
        }

        if (n < 1) {
            printf("Jumlah suku harus lebih dari 0.\n");
            continue;
        }

        if (n > 1000) {
            printf("Jumlah suku maksimal 1000.\n");
            continue;
        }

        if (n > 92) {
            printf("Maksimal 92 suku dapat disimpan dalam tipe data long long.\n");
            continue;
        }

        if (n <= jumlahSuku) {
            printf("Deret yang sudah tersimpan: ");
            for (int i = 0; i < n; i++) {
                printf("%lld ", fibonacci[i]);
            }
            printf("\n");
        } else {
            printf("Suku Fibonacci baru: ");
            for (int i = jumlahSuku; i < n; i++) {
                if (i < 2) {
                    fibonacci[i] = 1;
                } else {
                    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
                }
                printf("%lld ", fibonacci[i]);
            }
            jumlahSuku = n;
            printf("\n");
        }

        do {
            printf("Lanjut? (y/t): ");
            if (scanf(" %c", &lanjut) != 1) {
                printf("Input tidak valid.\n");
                return 1;
            }
            if (lanjut != 'y' && lanjut != 'Y' &&
                lanjut != 't' && lanjut != 'T') {
                printf("Masukkan y untuk lanjut atau t untuk berhenti.\n");
            }
        } while (lanjut != 'y' && lanjut != 'Y' &&
                 lanjut != 't' && lanjut != 'T');
    }

    return 0;
}
