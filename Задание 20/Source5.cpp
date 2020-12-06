#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float A[10][2];
    int N, i, j, k, P1, P2, P3;
    float P, m;
    printf("Введите количество точек N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i]:\n", i + 1);
        printf("x : ");
        scanf_s("%f", &A[i][0]);
        printf("y : ");
        scanf_s("%f", &A[i][1]);
    }
    m = 0;
    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
            for (k = j + 1; k < N; k++) {
                P = 0;
                P += sqrt(pow(A[i][0] - A[j][0], 2) + pow(A[i][1] - A[j][1], 2));
                P += sqrt(pow(A[i][0] - A[k][0], 2) + pow(A[i][1] - A[k][1], 2));
                P += sqrt(pow(A[j][0] - A[k][0], 2) + pow(A[j][1] - A[k][1], 2));
                if (P > m) {
                    P1 = i;
                    P2 = j;
                    P3 = k;
                    m = P;
                }
            }
    printf("Наибольший периметр равен P: %f\n", P);
    printf("A[%i]:\n x: %f\n y: %f\n", P1 + 1, A[P1][0], A[P1][1]);
    printf("A[%i]:\n x: %f\n y: %f\n", P2 + 1, A[P2][0], A[P2][1]);
    printf("A[%i]:\n x: %f\n y: %f\n", P3 + 1, A[P3][0], A[P3][1]);
    return 0;
}