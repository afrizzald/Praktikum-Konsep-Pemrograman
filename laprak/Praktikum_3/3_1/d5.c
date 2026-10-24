#include <stdio.h>

int main() {
    int b1, b2;
    float x;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &b1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b2);
    
    if (b1 == 0 && b2 == 0){
        printf("interdeminate form\n");
        return 0;
    }
    if (b2 == 0) {
        printf("division by zero\n");
        return 0;
    }
     else {
        x = (float) b1 / b2;
        printf("Hasil bagi b1 dengan b2 = %.3f\n", x);
    }

    return 0;
}
