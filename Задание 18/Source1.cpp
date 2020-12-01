#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10], B[10];
    int N, i;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    for (i = 0; i < N; i++) {
        printf("B[%i] : ", i + 1);
        scanf_s("%i", &B[i]);
    }
    for (i = 0; i < N; i++) {
        A[i] += B[i];
        B[i] = A[i] - B[i];
        A[i] = A[i] - B[i];
    }
    printf("Измененный массив A: \n");
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    printf("Измененный массив B: \n");
    for (i = 0; i < N; ++i)
        printf("B[%i] : %i\n", i + 1, B[i]);
    return 0;
}