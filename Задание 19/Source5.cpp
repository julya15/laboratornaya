#include <stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, j;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    for (i = N - 1; i >= 0; i--) {
        if (A[i] > 0) {
            N++;
            for (j = N - 1; j > i; j--)
                A[j] = A[j - 1];
            A[i] = 0;
        }
    }
    printf("Измененный массив A: ");
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}