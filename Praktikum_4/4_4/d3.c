#include <stdio.h>

int main() {
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
    return 0;
}