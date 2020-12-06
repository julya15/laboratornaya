#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10], B[10];
    int N, L, i, j, l, k, n;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    printf("Введите длину серии L: ");
    scanf_s("%i", &L);
    for (i = 0; i < N; ++i) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    j = -1;
    l = 1;
    n = N;
    for (i = 1; i < N; i++) {
        if (A[i - 1] != A[i]) {
            if (l < L) {
                B[++j] = 0;
                n -= l - 1;
            }
            else {
                for (k = 0; k < l; k++)
                    B[++j] = A[i - 1];
            }
            l = 0;
        }
        l++;
    }
    if (l < L) {
        B[++j] = 0;
        n -= l - 1;
    }
    else {
        for (k = 1; k <= l; k++)
            B[++j] = A[i - 1];
    }
    printf("Измененный мвссив:");
    for (i = 0; i < n; i++)
        A[i] = B[i];
    for (i = 0; i < n; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}