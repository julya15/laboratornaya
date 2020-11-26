#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int N, k, i;
    printf("Введите N:");
    scanf_s("%i", &N);
    k = 0;
    i = 0;
    while (i < N) {
        k++;
        i = i + k;
    }
    printf("Наименьшее из целых чисел K: %i\n", k);
    printf("Сумма чисел равна: %i\n", i);
    return 0;
}