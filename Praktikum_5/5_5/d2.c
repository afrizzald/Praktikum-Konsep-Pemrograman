#include <stdio.h>

int inchi(int);
double cm(int);
double meter(int);

int main(){
    int kaki;

    printf("masukan satuan dalam kaki: ");
    scanf("%d", &kaki);

    printf("hasil konversi ke inchi: %d inchi\n", inchi(kaki));
    printf("hasil konversi ke cm: %.2f cm\n", cm(kaki));
    printf("hasil konversi ke meter: %.2f meter\n", meter(kaki));

}

int inchi(int kaki){
    return kaki * 12;
}

double cm(int kaki){
    return (double)inchi(kaki) * 2.54;
}

double meter(int kaki){
    return (double)cm(kaki) / 100;
}