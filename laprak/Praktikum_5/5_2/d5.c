#include <stdio.h>

float konversi(float suhu, int asal, int tuj);

int main(void) {
    float suhu;
    int asal, tuj;

    printf("Masukkan suhu: ");
    scanf("%f", &suhu);
    printf("Masukkan kode asal (1 = Celcius, 2 = Fahrenheit, 3 = Kelvin): ");
    scanf("%d", &asal);
    printf("Masukkan kode tujuan (1 = Celcius, 2 = Fahrenheit, 3 = Kelvin): ");
    scanf("%d", &tuj);

    float hasil = konversi(suhu, asal, tuj);
    printf("Hasil konversi: %.2f\n", hasil);

    return 0;
}

float konversi(float suhu, int asal, int tuj) {
    float hasil;

    if (asal == 1) { // Celcius
        if (tuj == 2) { // Fahrenheit
            hasil = (suhu * 9.0f / 5.0f) + 32.0f;
        } else if (tuj == 3) { // Kelvin
            hasil = suhu + 273.15f;
        } else if (tuj == 1) {
            hasil = suhu;
        } else {
            printf("Kode tujuan tidak valid.\n");
            return -1;
        }
    } else if (asal == 2) { // Fahrenheit
        if (tuj == 1) { // Celcius
            hasil = (suhu - 32.0f) * 5.0f / 9.0f;
        } else if (tuj == 3) { // Kelvin
            hasil = ((suhu - 32.0f) * 5.0f / 9.0f) + 273.15f;
        } else if (tuj == 2) {
            hasil = suhu;
        } else {
            printf("Kode tujuan tidak valid.\n");
            return -1;
        }
    } else if (asal == 3) { // Kelvin
        if (tuj == 1) { // Celcius
            hasil = suhu - 273.15f;
        } else if (tuj == 2) { // Fahrenheit
            hasil = ((suhu - 273.15f) * 9.0f / 5.0f) + 32.0f;
        } else if (tuj == 3) {
            hasil = suhu;
        } else {
            printf("Kode tujuan tidak valid.\n");
            return -1;
        }
    } else {
        printf("Kode asal tidak valid.\n");
        return -1;
    }

    return hasil;
}
