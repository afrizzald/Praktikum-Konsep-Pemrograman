#include <stdio.h>

int main()
{
    int a, b, c, D;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    printf("Masukkan nilai c: ");
    scanf("%d", &c);

    D = (b * b) - (4 * a * c);

    printf("Diskriminan = %d\n", D);

    return 0;
}