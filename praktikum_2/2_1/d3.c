#include <stdio.h>

int main()
{
    int jml, s;
    int ratusanribu, limapuluhribu, duapuluhribu;
    int sepuluhribu, limaribu, duaribu, seribu;

    printf("Masukkan jumlah uang: ");
    scanf("%d", &jml);

    ratusanribu = jml / 100000;
    s = jml - (ratusanribu * 100000);

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
    printf("%d Lembar 100000\n", ratusanribu);
    printf("%d Lembar 50000\n", limapuluhribu);
    printf("%d Lembar 20000\n", duapuluhribu);
    printf("%d Lembar 10000\n", sepuluhribu);
    printf("%d Lembar 5000\n", limaribu);
    printf("%d Lembar 2000\n", duaribu);
    printf("%d Lembar 1000\n", seribu);

    return 0;
}