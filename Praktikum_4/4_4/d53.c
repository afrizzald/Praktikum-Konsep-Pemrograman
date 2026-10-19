#include <stdio.h>

int main() {
    char jawab;

    do {
        int n;

        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        int a = 0;
        int num = 2;

        while (a < n) {
            int prima = 1;

            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    prima = 0;
                    break;
                }
            }

            if (prima) {
                printf("%d ", num);
                a++;
            }

            num++;
        }

        printf("\n");

        do {
            printf("apakah anda ingin keluar (y/t)? ");
            scanf(" %c", &jawab);
        } while (jawab != 'y' && jawab != 't');

    } while (jawab != 'y');

    return 0;
}
