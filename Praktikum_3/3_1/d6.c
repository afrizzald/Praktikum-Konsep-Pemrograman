#include <stdio.h>

int main() {
    int x;

    printf("Masukkan sembarang bilangan: ");
    scanf("%d", &x);

    if (x >= 1 && x <= 100) {
        printf("%d ada dalam range 1-100\n", x);
    } else {
        printf("%d di luar range 1-100\n", x);
    }

    return 0;
}