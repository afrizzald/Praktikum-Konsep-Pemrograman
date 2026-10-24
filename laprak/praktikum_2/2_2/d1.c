#include <stdio.h>

int main(){
    float C, F;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &C); 
    F = C * 1.8 + 32;
    
    printf("Suhu dalam Fahrenheit: %2.2f\n", F);
    return 0;
}
