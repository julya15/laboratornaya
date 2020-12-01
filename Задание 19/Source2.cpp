#include <stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, x, j, y, n;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    for (i = 0; i < N; i++) {
        n = 0;
        for (j = 0; j < N; j++)
            if (A[i] == A[j]) n++;
        if (n == 2) {
            x = i - 1;
            y = A[i];
            for (j = i; j < N; j++)
                if (A[j] != y) {
                    x++;
                    A[x] = A[j];
                }
            N = x + 1;
            i--;
        }
    }
    printf("Количество элементов A: %i\n", N);
    for (i = 0; i < N; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}