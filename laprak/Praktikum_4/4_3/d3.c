#include <stdio.h>

int main(void) {
	int n;

	printf("Masukkan n: ");
	scanf("%d", &n);

	for (int i = 1; ; i++) {
		if (i >= n || i >= 100) {
			break;
		}

		if (i % 2 == 0 || i % 7 == 0 || i % 11 == 0) {
			continue;
		}

		printf("%d ", i);
	}

	printf("\n");
	return 0;
}
