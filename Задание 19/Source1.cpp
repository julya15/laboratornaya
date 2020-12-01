#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, x;
    printf("¬ведите количество элементов N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    x = 0;
    for (i = 1; i < N; i++) {
        if (A[x] != A[i]) {
            x++;
            A[x] = A[i];
        }
    }
    x++;
    printf("»змененный массив A из %i\n", x);
    for (i = 0; i < x; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);
    return 0;
}