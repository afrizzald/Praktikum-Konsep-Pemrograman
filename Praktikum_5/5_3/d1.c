#include <stdio.h>

int terbesar(int a, int b);

int main(void)
{
    int x, y;

    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &x, &y);

    printf("Bilangan terbesar adalah %d\n", terbesar(x, y));

    return 0;
}

int terbesar(int x, int y)
{
    if (x > y) {
        return x;
    }

    return y;
}