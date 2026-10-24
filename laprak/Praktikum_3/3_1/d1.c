#include <stdio.h>

int main() {
    int a;

    printf("Masukkan sebuah a: ");
    scanf("%d", &a);

    printf("Bilangan yang diinputkan adalah %d.\n", a);

    if (a % 2 == 0) {
        printf("%d adalah a genap.\n", a);
    } else {
        printf("%d adalah a ganjil.\n", a);
    }

    return 0;
}
