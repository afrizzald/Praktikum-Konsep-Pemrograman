#include <math.h>
#include <stdio.h>

#define JUMLAH_SUDUT 13
#define PI 3.14159

double radian(double derajat)
{
    return derajat / 180.0 * PI;
}

int main(void)
{
    const int x[JUMLAH_SUDUT] = {
        0, 30, 60, 90, 120, 150, 180,
        210, 240, 270, 300, 330, 360
    };
    double data[JUMLAH_SUDUT][3];

    for (int i = 0; i < JUMLAH_SUDUT; i++) {
        double sudutRadian = radian(x[i]);

        data[i][0] = sin(sudutRadian);
        data[i][1] = cos(sudutRadian);

        if (x[i] % 180 == 90) {
            data[i][1] = 0.0;
            data[i][2] = NAN;
        } else {
            data[i][2] = tan(sudutRadian);

            if (fabs(data[i][0]) < 0.0005) {
                data[i][0] = 0.0;
            }
            if (fabs(data[i][1]) < 0.0005) {
                data[i][1] = 0.0;
            }
            if (fabs(data[i][2]) < 0.0005) {
                data[i][2] = 0.0;
            }
        }
    }

    printf("%-8s %-12s %-12s %-18s\n", "x", "Sin(x)", "Cos(x)", "Tan(x)");
    for (int i = 0; i < JUMLAH_SUDUT; i++) {
        printf("%-8d %-12.3f %-12.3f ", x[i], data[i][0], data[i][1]);
        if (isnan(data[i][2])) {
            printf("%-18s\n", "tidak terdefinisi");
        } else {
            printf("%-18.3f\n", data[i][2]);
        }
    }

    return 0;
}