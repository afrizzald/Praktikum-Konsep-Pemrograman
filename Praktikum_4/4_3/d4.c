#include <stdio.h>

int main(void)
{
    int n, nilai, sum = 0, min, max;
    float x;

    printf("masukan jumlah data : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", &nilai);
        if (i == 1){
            min = nilai;
            max = nilai;
        }
        else{
            if (nilai < min){
                min = nilai;
            }
            if (nilai > max){
                max = nilai;
            }
        }
        sum += nilai;
    }

    x = (float)sum / n;

    printf("Nilai minnimal = %d\n", min);
    printf("Nilai maximal = %d\n", max);
    printf("Nilai rata-rata = %.2f\n", x);

    return 0;
}
