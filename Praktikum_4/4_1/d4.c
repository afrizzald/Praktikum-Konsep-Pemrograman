#include <stdio.h>

int main(void)
{
    for (char karakter = 'Z'; karakter >= 'A'; karakter--)
    {
        printf("%c\n", karakter);
    }

    return 0;
}