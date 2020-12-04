#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Введите число:");
    scanf_s("%i", &n);
    switch (n / 100) {
    case 1:
        printf("Сто ");
        break;
    case 2:
        printf("Двести ");
        break;
    case 3:
        printf("Триста ");
        break;
    case 4:
        printf("Четыреста ");
        break;
    case 5:
        printf("Пятьсот ");
        break;
    case 6:
        printf("Шестьсот ");
        break;
    case 7:
        printf("Семьсот ");
        break;
    case 8:
        printf("Восемьсот  ");
        break;
    case 9:
        printf("Девятьсот  ");
        break;
    }
    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            printf("десять\n");
            break;
        case 11:
            printf("одинадцать\n");
            break;
        case 12:
            printf("двенадцать\n");
            break;
        case 13:
            printf("тринадцать\n");
            break;
        case 14:
            printf("четырнадцать\n");
            break;
        case 15:
            printf("пятнадцать\n");
            break;
        case 16:
            printf("шестнадцать\n");
            break;
        case 17:
            printf("семнадцать\n");
            break;
        case 18:
            printf("восемнадцать\n");
            break;
        case 19:
            printf("девятнадцать\n");
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
        }
        switch (n % 10) {
        case 1:
            printf("один\n");
            break;
        case 2:
            printf("два\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четыре\n");
            break;
        case 5:
            printf("пять\n");
            break;
        case 6:
            printf("шесть\n");
            break;
        case 7:
            printf("семь\n");
            break;
        case 8:
            printf("восемь\n");
            break;
        case 9:
            printf("девять\n");
            break;
        }
    }
    return 0;
}