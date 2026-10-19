#include <stdio.h>

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
        return 0;
    }

    int result = 1;

    for (int i = 2; i <= n; i++) {
        int temp = 0;
        for (int j = 0; j < i; j++) {
            temp += result;
        }
        result = temp;
    }

    printf("%d (faktorial dari %d)\n", result, n);

    return 0;
}
