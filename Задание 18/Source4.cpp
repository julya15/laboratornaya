#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, min, max;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    min = 0;
    max = 0;
    for (i = N - 1; i >= 0; i--) {
        if (A[i] < A[min])
            min = i;
        if (A[i] > A[max])
            max = i;
    }
    if (max < min) {
        max += min;
        min = max - min;
        max = max - min;
    }
    for (i = min + 1; i < min + (max - min); i++)
        A[i] = 0;
    printf("Измененный массив A: \n");
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}