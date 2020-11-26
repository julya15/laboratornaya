#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A, B, s;
    printf("Введите A:");
    scanf_s("%i", &A);
    printf("Введите B:");
    scanf_s("%i", &B);
    while ((A != 0) & (B != 0)) {
        if (A > B)
            A = A % B;
        else
            B = B % A;
    }
    s = A + B;
    printf("Наибольший общий делитель равен: %i\n", s);
    return 0;
}