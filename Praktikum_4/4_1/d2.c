#include <stdio.h>

int main(void)
{
    int x, y = 0;

    scanf("%d", &x);
    for (int i = x; i >= 1; i--){
        printf("%d", i);
        y += i;

        if (i > 1)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n", y);

    return 0;
}