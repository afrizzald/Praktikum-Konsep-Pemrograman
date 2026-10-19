#include <stdio.h>

int main ()
{
    //menambahkan variabel
    int a, b, jumlah, ka, kb;
    float r; //float karena rata2 biasnaya ada koma/ desimal
    //input
    printf("masukan bilangan a dan b : ");
    scanf("%d %d", &a, &b);
    // PERHITUNGAN HASIL
    jumlah = a + b;
    r = jumlah / 2.0;
    ka = a * a;
    kb = b * b;
    // TAMPILKAN HASIL
    printf("jumlah a+b : %d , rata-rata : %f , kuadrat a : %d , kuadrat b: %d ", jumlah, r, ka, kb);

    return 0;
}

 
