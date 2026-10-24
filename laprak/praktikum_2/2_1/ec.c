#include <stdio.h>

int main (){
    float x,y,z,a,b,c;

    /*
    (1) y = bx^2 + 0,5x – c
    (2) y= 0,3xz/2a 
    */ 
   printf("masukan x, z, a, b, c\n");
    scanf("%f %f %f %f %f",&x,&z,&a,&b,&c);

    printf("y = bx^2 + 0,5x - c = %2.2f\n", b * x * x + 0.5 * x - c);  
    printf("y= 0,3xz/2a = %2.2f\n", (0.3 * x * z) / (2 * a));

    return 0;
}
