#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int D, N, i, k;
    printf("¬ведите N: ");
    scanf_s("%i", &N);
    printf("¬ведите A: ");
    scanf_s("%i", &A[0]);
    printf("¬ведение D: ");
    scanf_s("%i", &D);
    k = 1;
    for (i = 1; i < N; i++) {
        k *= D;
        A[i] = A[0] * k;
    }
    for (i = 0; i < N; i++)
        printf("%i : %i\n", i, A[i]);
    return 0;
}