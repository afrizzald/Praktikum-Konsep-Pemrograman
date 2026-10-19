#include <stdio.h>

int main(void)
{
	int b, sum = 0, n = 1, max, min;
    float avg;
	char input = 'y';

	while (input == 'y' || input == 'Y')
	{
		printf("Masukkan bilangan ke-%d : ", n);
		scanf("%d", &b);

        if (n == 1) {
            max = b;
            min = b;
        } else {
            if (b > max) {
                max = b;
            }
            if (b < min) {
                min = b;
            }
        }

		sum += b;
		n++;

		printf("Mau memasukkan data lagi [y/t] ? ");
		scanf(" %c", &input);
	}

    avg = (float)sum / (n - 1);
	

    printf("Total b = %d\n", sum);
    printf("Rata-rata = %.2f\n", avg);
    printf("Nilai maksimum = %d\n", max);
    printf("Nilai minimum = %d\n", min);

	return 0;
}
