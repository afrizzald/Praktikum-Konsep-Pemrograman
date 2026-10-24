#include <stdio.h>

int main(void) {
	int n;

	printf("Masukkan n: ");
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}

	printf("\n");
	return 0;
}
