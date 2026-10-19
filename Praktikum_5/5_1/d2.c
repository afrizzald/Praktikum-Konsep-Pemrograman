#include <stdio.h>

void triangular(int n) {
    int jumlah = 0;

    for (int i = 1; i <= n; i++) {
        jumlah += i;
    }

    printf("Bilangan triangular dari %d adalah %d\n", n, jumlah);
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    triangular(n);

    return 0;
}
