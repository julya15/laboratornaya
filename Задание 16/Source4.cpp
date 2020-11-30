#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    for (i = 0; i < N / 2; i++) {
        printf("%i\n", A[i]);
        printf("%i\n", A[N - i - 1]);
    }
    if (N % 2 != 0)
        printf("%i\n", A[(N / 2)]);
    return 0;
}