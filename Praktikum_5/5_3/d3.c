#include <stdio.h>

void tambahDua(int *b1, int *b2);

int main(void)
{
    int b1, b2;

    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &b1, &b2);

    tambahDua(&b1, &b2);

    printf("Hasil setelah masing-masing ditambah 2: %d dan %d\n",b1, b2);

    return 0;
}

void tambahDua(int *b1, int *b2)
{
    *b1 += 2;
    *b2 += 2;
}