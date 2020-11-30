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
    for (i = 0; i < N; i += 2)
        printf("%i\n", A[i]);
    for (i = N - (N % 2) - 1; i >= 1; i -= 2)
        printf("%i\n", A[i]);
    return 0;
}