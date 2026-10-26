#include <stdio.h>

#define MAKS 100

int main(void)
{
    int A[MAKS][MAKS];
    int B[MAKS][MAKS];
    int C[MAKS][MAKS];
    int ordo;
    char b = 'y';

    while (b == 'y' || b == 'Y') {
        printf("Masukkan ordo matriks (1-%d): ", MAKS);
        if (scanf("%d", &ordo) != 1) {
            printf("Input ordo harus berupa bilangan bulat.\n");
            return 1;
        }

        if (ordo < 1 || ordo > MAKS) {
            printf("Ordo matriks harus antara 1 dan %d.\n", MAKS);
            continue;
        }

        printf("Masukkan elemen matriks A:\n");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                printf("A[%d][%d]: ", i, j);
                if (scanf("%d", &A[i][j]) != 1) {
                    printf("Input elemen matriks harus berupa bilangan bulat.\n");
                    return 1;
                }
            }
        }

        printf("Masukkan elemen matriks B:\n");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                printf("B[%d][%d]: ", i, j);
                if (scanf("%d", &B[i][j]) != 1) {
                    printf("Input elemen matriks harus berupa bilangan bulat.\n");
                    return 1;
                }
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("\nMatriks A:\n");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriks B:\n");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriks C (A + B):\n");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }

        do {
            printf("\nUlangi program? (y/t): ");
            if (scanf(" %c", &b) != 1) {
                printf("Input pilihan tidak valid.\n");
                return 1;
            }
            if (b != 'y' && b != 'Y' &&
                b != 't' && b != 'T') {
                printf("Masukkan y untuk mengulang atau t untuk berhenti.\n");
            }
        } while (b != 'y' && b != 'Y' && b != 't' && b != 'T');
    }

    return 0;
}