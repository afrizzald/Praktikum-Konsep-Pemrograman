#include <stdio.h>

int main(void)
{
	int b, sum = 0, n = 1;
	char input = 'y';

	while (input == 'y' || input == 'Y')
	{
		printf("Masukkan bilangan ke-%d : ", n);
		scanf("%d", &b);

		sum += b;
		n++;

		printf("Mau memasukkan data lagi [y/t] ? ");
		scanf(" %c", &input);
	}

	printf("Total b = %d\n", sum);

	return 0;
}
