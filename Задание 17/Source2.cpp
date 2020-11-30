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
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    x = A[1] - A[0];
    for (i = 1; i < N; i++) {
        if (x != A[i] - A[i - 1]) {
            x = 0;
        }
    }
    printf("%i\n: ", x);
    return 0;
}
