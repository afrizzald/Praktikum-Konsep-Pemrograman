#include <stdio.h>

int main()
{
    float jml, s;
    float ratusanribu, limapuluhribu, duapuluhribu;
    float sepuluhribu, limaribu, duaribu, seribu;

    printf("Masukkan jumlah uang: ");
    scanf("%f", &jml);

    ratusanribu = jml / 100000;
    s = jml - (ratusanribu * 100000);
    printf("%.0f", s);
    printf("%.0f", ratusanribu);

    limapuluhribu = s / 50000;
    s = s - (limapuluhribu * 50000);

    duapuluhribu = s / 20000;
    s = s - (duapuluhribu * 20000);

    sepuluhribu = s / 10000;
    s = s - (sepuluhribu * 10000);

    limaribu = s / 5000;
    s = s - (limaribu * 5000);

    duaribu = s / 2000;
    s = s - (duaribu * 2000);

    seribu = s / 1000;
    s = s - (seribu * 1000);

    printf("\nHasil pecahan:\n");
    printf("%.0f Lembar 100000.00\n", ratusanribu);
    printf("%.0f Lembar 50000.00\n", limapuluhribu);
    printf("%.0f Lembar 20000.00\n", duapuluhribu);
    printf("%.0f Lembar 10000.00\n", sepuluhribu);
    printf("%.0f Lembar 5000.00\n", limaribu);
    printf("%.0f Lembar 2000.00\n", duaribu);
    printf("%.0f Lembar 1000.00\n", seribu);

    return 0;
}
