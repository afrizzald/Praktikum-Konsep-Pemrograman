#include <stdio.h>

int main(void)
{
	int x, y, sum = 0;

	printf("Masukkan x: ");
	scanf("%d", &x);

	int a = x;
	int div = 1;
	while (a / div >= 10 || a / div <= -10) {
		div *= 10;
	}

	printf("Perhitungan jumlah digit %d: ", a);
	while (div > 0) {
		y = (a / div) % 10;
		if (y < 0) {
			y = -y;
		}
		sum += y;
		printf("%d", y);
		div /= 10;
		if (div > 0) {
			printf(" + ");
		}
	}

	printf(" = %d\n", sum);
	return 0;
}
