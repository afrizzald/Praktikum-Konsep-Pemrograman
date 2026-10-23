#include <stdio.h>

int permutasi (int,int);
int kombinasi (int,int);

int main() {
    
    int n, r;

    printf("sistem permutasi dan kombinasi\n");

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    printf("Permutasi P(%d, %d) = %d\n", n, r, permutasi(n, r));
    printf("Kombinasi C(%d, %d) = %d\n", n, r, kombinasi(n, r));

    return 0;
}

int permutasi(int n, int r) {
    if (r > n) {
        return 0;
    }
    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
    }
    return result;
}

int kombinasi(int n, int r) {
    if (r > n) {
        return 0;
    }
    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
