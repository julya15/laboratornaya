#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, x;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i]: ", i + 1);
        scanf_s("%i", &A[i]);
    }
    if (A[N - 1] > A[N - 2]) {
        printf("%i \n", N);
    }
    else {
        i = N - 2;
        while ((i >= 1) && !((A[i] > A[i + 1]) && (A[i - 1] < A[i]))) {
            i--;
        }
        x = i + 1;
        printf("%i \n", x);
    }
    return 0;
}