#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, x, i;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    x = 0;
    for (i = N - 1; i >= 0; i--) {
        if (A[i] % 2 != 0) {
            x = A[i];
            break;
        }
    }
    for (; i >= 0; i--) {
        if (A[i] % 2 != 0) {
            A[i] += x;
        }
    }
    printf("Измененный массив A: \n");
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}