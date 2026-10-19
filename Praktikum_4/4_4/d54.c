#include <stdio.h>

int main() {
    char jawab;

    do {
        int n;

        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            int sum = 0;
            for (int j = 0; j < i; j++) {
                sum += j;
            }
            printf("%d ", sum);
        }

        printf("\n");

        do {
            printf("apakah anda ingin keluar (y/t)? ");
            scanf(" %c", &jawab);
        } while (jawab != 'y' && jawab != 't');

    } while (jawab != 'y');

    return 0;
}
