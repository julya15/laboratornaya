#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Введите количество:");
    scanf_s("%i", &n);
    if (n / 10 == 1)
        switch (n) {
        case 10:
            printf("Десять учебных заданий. \n");
            break;
        case 11:
            printf("Одинадцать учебных заданий.\n");
            break;
        case 12:
            printf("Двенадцать учебных заданий.\n");
            break;
        case 13:
            printf("Тринадцать учебных заданий.\n");
            break;
        case 14:
            printf("Четырнадцать учебных заданий.\n");
            break;
        case 15:
            printf("Пятнадцать учебных заданий.\n");
            break;
        case 16:
            printf("Шестнадцать учебных заданий.\n");
            break;
        case 17:
            printf("Семнадцать учебных заданий.\n");
            break;
        case 18:
            printf("Восемнадцать учебных заданий.\n");
            break;
        case 19:
            printf("Девятнадцать учебных заданий.\n");
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            printf("Двадцать ");
            break;
        case 3:
            printf("Тридцать ");
            break;
        case 4:
            printf("Сорок ");
            break;
        }
        switch (n % 10) {
        case 1:
            printf("одно ");
            break;
        case 2:
            printf("два ");
            break;
        case 3:
            printf("три ");
            break;
        case 4:
            printf("четыре ");
            break;
        case 5:
            printf("пять ");
            break;
        case 6:
            printf("шесть ");
            break;
        case 7:
            printf("семь ");
            break;
        case 8:
            printf("восемь ");
            break;
        case 9:
            printf("девять ");
            break;
        }
        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("учебных заданий.\n");
            break;
        case 1:
            printf("учебное задание.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("учебных задания.\n");
            break;
        }
    }
    return 0;
}