#include <stdio.h>

#define JUMLAH_MAHASISWA 4
#define JUMLAH_MATA_PELAJARAN 3

void tampilkanLaporan(const int nilai[][JUMLAH_MATA_PELAJARAN], int jumlahMahasiswa)
{
    printf("No. Mhs\tRata-rata\n");
    printf("------------------------\n");

    for (int i = 0; i < jumlahMahasiswa; i++) {
        int total = 0;

        for (int j = 0; j < JUMLAH_MATA_PELAJARAN; j++) {
            total += nilai[i][j];
        }

        printf("%d\t%.2f\n", i + 1, (double) total / JUMLAH_MATA_PELAJARAN);
    }

    printf("------------------------\n");
}

int main(void)
{
    const int nilai[JUMLAH_MAHASISWA][JUMLAH_MATA_PELAJARAN] = {
        {81, 90, 62},
        {50, 83, 87},
        {89, 55, 65},
        {77, 70, 92}
    };

    tampilkanLaporan(nilai, JUMLAH_MAHASISWA);
    return 0;
}