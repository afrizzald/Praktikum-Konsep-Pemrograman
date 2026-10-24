#include <stdio.h>

int main(void){
	int c;

	printf("Ketikkan karakter (Enter untuk selesai):\n");

	while (1){
		c = getchar();
		if (c == '\n' || c == EOF){
			break;
		}
		putchar(c);
	}
	putchar('\n');

	return 0;
}
