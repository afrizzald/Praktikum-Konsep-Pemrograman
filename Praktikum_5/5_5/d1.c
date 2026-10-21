#include <stdio.h>

double masukan(int n);
double average(int n, double sum);

int main(void)
{
    int n;
    double sum, x;

    printf("Masukkan jumlah data: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Jumlah data harus berupa bilangan bulat positif.\n");
        return 1;
    }

    sum = masukan(n);
    x = average(n, sum);

    printf("Rata-rata: %.2f\n", x);

    return 0;
}

double masukan(int n)
{
    double nilai;
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        printf("Masukkan data ke-%d: ", i);
        if (scanf("%lf", &nilai) != 1) {
            printf("Input data tidak valid.\n");
            return 0.0;
        }
        sum += nilai;
    }

    return sum;
}

double average(int n, double sum)
{
    return sum / n;
}