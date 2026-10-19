#include <stdio.h>

int main (int n){  
    scanf("%d", &n);
    
    int x = 1;
    for (int i = 1; i <= n; i++){
        x *= i;

        printf("%d * ", i);
    }
    printf(" = %d\n", x);
    return 0;
}