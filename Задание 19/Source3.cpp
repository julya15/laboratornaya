#include <stdio.h>
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
    for (i = 0; i < N; i++) {
        if (A[min] > A[i]) {
            min = i;
        }
        if (A[max] < A[i]) {
            max = i;
        }
    }
    if (max > min)
        max++;
    N++;
    for (i = N - 1; i >= min; i--)
        A[i] = A[i - 1];
    A[min] = 0;
    N++;
    for (i = N - 1; i > max + 1; i--)
        A[i] = A[i - 1];
    A[max + 1] = 0;
    printf("Измененный массив A");
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}