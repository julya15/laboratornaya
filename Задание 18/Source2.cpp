#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float A[10], B[10];
    int N, K, i;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (K = 0; K < N; K++) {
        printf("A[%i] : ", K + 1);
        scanf_s("%f", &A[K]);
    }
    for (K = 0; K < N; K++) {
        B[K] = 0;
        for (i = 0; i <= K; i++) {
            B[K] += A[i];
        }
        B[K] /= K + 1;
    }
    printf("Измененный массив B: \n");
    for (K = 0; K < N; K++)
        printf("B[%i] : %f\n", K + 1, B[K]);
    return 0;
}