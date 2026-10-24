#include <stdio.h>

int main(){

    int var_bulat;
    float var_pecahan1;
    double var_pecahan2;
    char var_karakter;

    var_bulat = 32767;
    var_pecahan1 = 339.2345678f;
    var_pecahan2 = 3.4567e+40;
    var_karakter = 'S';

    printf ("bulat = %d, pecahan1 = %f, pecahan2 = %lf, karakter = %c", var_bulat, var_pecahan1, var_pecahan2, var_karakter);
    return 0;

    }