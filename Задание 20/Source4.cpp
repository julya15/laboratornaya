#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10][2];
    int N, i, m, k, l;
    printf("¬ведите количество точек N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i]:\n", i + 1);
        printf("x : ");
        scanf_s("%i", &A[i][0]);
        printf("y : ");
        scanf_s("%i", &A[i][1]);
    }
    m = 0;
    l = 0;
    for (i = 0; i < N; i++) {
        if (A[i][0] < 0 && A[i][1]>0) {
            k = sqrt(pow(A[i][0], 2) + pow(A[i][1], 2));
            if (k > l || i == 0) {
                l = k;
                m = i;
            }
        }
    }
    printf("A[%i]:\n x: %i\n y: %i\n", m + 1, A[m][0], A[m][1]);
    return 0;
}