#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10];
    int N, i, j;
    printf("������� N: ");
    scanf_s("%i", &N);
    printf("������� A: ");
    scanf_s("%i", &A[0]);
    printf("������� B: ");
    scanf_s("%i", &A[1]);
    for (i = 2; i < N; i++) {
        A[i] = 0;
        for (j = 0; j < i; j++)
            A[i] += A[j];
    }
    for (i = 0; i < N; i++)
        printf("%i : %i\n", i, A[i]);
    return 0;
}