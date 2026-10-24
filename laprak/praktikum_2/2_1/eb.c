#include <stdio.h>

int main (){
    int x = 22;

    x = (2 + 3) - 10 * 2;
    printf("x1 = %d\n", x);
    
    x = (2 + 3) - (10 * 2);
    printf("x2 = %d\n", x);
    
    x = 10 % 3 * 2 + 1;
    printf("x3 = %d\n", x);

    return 0;
}
