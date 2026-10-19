#include <stdio.h>

int main() {
    int x, i, count = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &x);

    if (x <= 1) {
        printf("%d bukan bilangan prima.\n", x);
    } else {
        for (i = 2; i <= x / 2; i++) {
            if (x % i == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d adalah bilangan prima.\n", x);
        } else {
            printf("%d bukan bilangan prima.\n", x);
        }
    }

    return 0;
}
