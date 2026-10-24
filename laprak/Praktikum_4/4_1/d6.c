#include <stdio.h>

int main (int n){  
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int x = i;
        if (x % 2 == 0){
            x *= -1;
        }
        printf("%d ", x);
    }
    return 0;
}