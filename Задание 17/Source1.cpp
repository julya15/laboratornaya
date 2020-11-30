#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, K, L, i, s;
    float x;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    printf("Введите K: ");
    scanf_s("%i", &K);
    printf("Введение L: ");
    scanf_s("%i", &L);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    s = 0;
    for (i = 0; i < K - 1; i++)
        s += A[i];
    for (i = L; i < N; i++)
        s += A[i];
    x = s / (K - 1 + (N - L));
    printf("%f\n: ", x);
    return 0;
}