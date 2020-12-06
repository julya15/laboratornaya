#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A[10], B[10];
    int N, k, i, n, K, m, j, l;
    printf("Введите количество элементов N: ");
    scanf_s("%i", &N);
    printf("Введите длину серии K: ");
    scanf_s("%i", &K);
    for (i = 0; i < N; ++i) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    n = 1;
    l = (K == 1 ? 1 : 0);
    k = 1;
    j = -1;
    for (i = 1; i < N; i++) {
        if (A[i - 1] != A[i]) {
            n++;
            if (n == k)
                k = i;
            m = i;
        }
        if (n == K)
            l++;
    }
    int i2 = -1;
    for (i = 0; i < K; i++)
        B[++j] = A[i];
    for (i = m; i < n; i++)
        B[++j] = A[i];
    for (i = k + l; i < m; i++)
        B[++j] = A[i];
    for (i = k; i < m + l; i++)
        B[++j] = A[i];
    for (i = 0; i < N; i++)
        A[i] = B[i];
    for (i = 0; i < N; i++)
        printf("a  %i : %i\n", i + 1, A[i]);
    return 0;
}