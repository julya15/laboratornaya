#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    printf("Введите номер числа:");
    scanf_s("%i", &n);
    printf("Введите номер месяца:");
    scanf_s("%i", &m);
    if (n / 10 == 1)
        switch (n) {
        case 10:
            printf("Десятое");
            break;
        case 11:
            printf("Одинадцатое ");
            break;
        case 12:
            printf("Двенадцатое ");
            break;
        case 13:
            printf("Тринадцатое ");
            break;
        case 14:
            printf("Четырнадцатое ");
            break;
        case 15:
            printf("Пятнадцатое ");
            break;
        case 16:
            printf("Шестнадцатое ");
            break;
        case 17:
            printf("Семнадцатое ");
            break;
        case 18:
            printf("Восемнадцатое ");
            break;
        case 19:
            printf("Девятнадцатое ");
            break;
        case 20:
            printf("Двадцатое");
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
        }
        switch (n % 10) {
        case 1:
            printf("первое ");
            break;
        case 2:
            printf("второе ");
            break;
        case 3:
            printf("третье ");
            break;
        case 4:
            printf("четвертое ");
            break;
        case 5:
            printf("пятое ");
            break;
        case 6:
            printf("шестое ");
            break;
        case 7:
            printf("седьмое ");
            break;
        case 8:
            printf("восьмое ");
            break;
        case 9:
            printf("девятое ");
            break;
        }
        switch (m) {
        case 1:
            printf("января.");
            break;
        case 2:
            printf("февраля.");
            break;
        case 3:
            printf("марта.");
            break;
        case 4:
            printf("апреля.");
            break;
        case 5:
            printf("мая.");
            break;
        case 6:
            printf("июня.");
            break;
        case 7:
            printf("июля.");
            break;
        case 8:
            printf("августа.");
            break;
        case 9:
            printf("сентября.");
            break;
        case 10:
            printf("октября.");
            break;
        case 11:
            printf("ноября.");
            break;
        case 12:
            printf("декабря.");
            break;
        }
    }
    return 0;
}