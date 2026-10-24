#include <stdio.h>

int main (){

    int a=12,b=2,c=3,d=4;

    printf("a %% b = %d\na - c = %d\na + b = %d\na / d = %d\na / d * d + a %% d = %d\na %% d / d * a - c=%d\n",
         a % b, a - c, a + b, a / d, a / d * d + a % d, a % d / d * a - c);
    
    return 0;

    }
    