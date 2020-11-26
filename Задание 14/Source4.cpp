#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float P, S, n;
    int K;
    printf("Введите проценты P:");
    scanf_s("%f", &P);
    K = 0;
    S = 1000;
    while (S <= 1100) {
        K++;
        n = S * P / 100;
        S = S + n;
    }
    printf("Количество месяцев равно: %i\n", K);
    printf("Размер вклада равен: %f\n", S);
    return 0;
}