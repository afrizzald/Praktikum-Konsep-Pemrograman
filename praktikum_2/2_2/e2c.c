#include <stdio.h>

int main()
{
    int x;
    
    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    x = 3 * x * x - 5 * x + 6;
    printf("Nilai dari 3x^2 - 5x + 6 adalah: %d", x);

    return 0;
}
