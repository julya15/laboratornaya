#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10], B[10], C[10];
    int N, i, m;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; ++i) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    m = 0;
    B[m] = 1;
    C[m] = A[m];
    for (i = 1; i < N; i++) {
        if (A[i - 1] == A[i])
            B[m]++;
        else {
            m++;
            B[m] = 1;
            C[m] = A[i];
        }
    }
    for (i = 0; i <= m; i++)
        printf("B[%i]=%i C[%i]=%i\n", i + 1, B[i], i + 1, C[i]);
    return 0;
}