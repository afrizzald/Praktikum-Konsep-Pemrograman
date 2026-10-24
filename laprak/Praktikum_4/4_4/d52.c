#include <stdio.h>

int main() {
    char jawab;

    do {
        int n;
        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", i);
            }
            printf("\n");
        }

        do {
            printf("apakah anda ingin keluar (y/t)? ");
            scanf(" %c", &jawab);
        } while (jawab != 'y' && jawab != 't');

    } while (jawab != 'y');

    return 0;
}
