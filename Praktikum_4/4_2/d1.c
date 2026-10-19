#include <stdio.h>

int main(void)
{
	char c;

	printf("Ketik karakter (X untuk berhenti):\n");
	c = getchar();

	while (c != 'X')
	{
		printf("%c\n", c);
		c = getchar();
	}
	return 0;

    // char c;

	// printf("Ketik karakter (X untuk berhenti):\n");

	// do
	// {
	// 	c = getchar();

	// 	if (c != 'X')
	// 	{
	// 	printf("%c\n", c);
	// 	}
	// }
	// while (c != 'X');

	// return 0;
}
