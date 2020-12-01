#include<stdio.h>
#include<math.h>
#include<locale.h>
int swap(float* f1, float* f2)
{
    *f1 += *f2;
    *f2 = *f1 - *f2;
    *f1 = *f1 - *f2;
    return 0;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%f", &A[i]);
    }
    for (i = N - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            swap(&A[i], &A[i + 1]);
        }
    }
    for (i = 1; i < N; i++) {
        if (A[i - 1] < A[i]) {
            swap(&A[i - 1], &A[i]);
        }
    }
    printf("Измененный массив A: \n");
    for (i = 0; i < N; i++)
        printf("A[%i] : %f\n", i + 1, A[i]);
    return 0;
}