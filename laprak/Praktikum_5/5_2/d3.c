#include <stdio.h>

void prima(int n) {
    int prima = 1;

    if (n <= 1) {
        prima = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prima = 0;
                break;
            }
        }
    }

    if (prima) {
        printf("%d adalah bilangan prima.\n", n);
    } else {
        printf("%d bukan bilangan prima.\n", n);
    }
}

int main(void) {
    int n;

    printf("Masukkan sebuah bilangan bulat: ");
    if (scanf("%d", &n) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    prima(n);

    return 0;
}
