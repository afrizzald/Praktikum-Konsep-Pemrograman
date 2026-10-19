#include <stdio.h>
int main ()
{
int a;
scanf("%d", &a);
for (int i = 0; i < 4; i++) {
    a++;
    printf("a = %d\n", a);
}
printf("a = %d", a);

return 0;
}