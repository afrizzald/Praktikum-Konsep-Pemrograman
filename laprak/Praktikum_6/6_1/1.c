#include <stdio.h>

int main() {
    int n;
    
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int A[n];

    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Elemen array yang dimasukkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}