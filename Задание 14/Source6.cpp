#include <math.h>
#include<stdio.h>
#include<locale.h> 
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int N, F, F1, F2, K;
    printf("Введите число Фибоначчи N:");
    scanf_s("%i", &N);
    F = 0;
    K = 2;
    F1 = 1;
    F2 = 1;
    while (F < N) {
        K++;
        F = F2 + F1;
        F2 = F1;
        F1 = F;
    }
    printf("K равно:%i\n", K);
    return 0;
}