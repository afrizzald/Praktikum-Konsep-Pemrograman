#include <stdio.h>

int main() {
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
    return 0;
}
