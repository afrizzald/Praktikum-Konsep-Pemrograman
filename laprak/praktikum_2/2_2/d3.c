#include <stdio.h>

int main()
{
    float gp, tp, ta, thr, p, t, a, tot;
    int ja, mk, mker;

    printf("Masukkan gaji pokok: ");
    scanf("%f", &gp);

    printf("Masukkan jumlah anak: ");
    scanf("%d", &ja);

    printf("Masukkan masa kerja (tahun): ");
    scanf("%d", &mk);

    printf("Masukkan jumlah masuk kerja (hari): ");
    scanf("%d", &mker);

    tp = 0.10f * gp;
    ta = 0.05f * gp * ja;
    thr = 5000.0f * mk;

    p = 0.15f * (gp + tp + ta);

    t = 3000.0f * mker;
    a = 20000.0f;

    tot = gp + tp + ta
            + thr - p + t - a;

    printf("\n=== RINCIAN PENDAPATAN ===\n");
    printf("Gaji Pokok          : Rp %.2f\n", gp);
    printf("Tunjangan Pasangan  : Rp %.2f\n", tp);
    printf("Tunjangan Anak      : Rp %.2f\n", ta);
    printf("THR                 : Rp %.2f\n", thr);
    printf("Pajak               : -Rp %.2f\n", p);
    printf("Bantuan Transport   : Rp %.2f\n", t);
    printf("Polis Asuransi      : -Rp %.2f\n", a);
    printf("-------------------------------\n");
    printf("Total Pendapatan    : Rp %.2f\n", tot);

    return 0;
}
