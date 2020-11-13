#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A1, B1, C1, A2, B2, C2, x, y, s;
	printf("Введите значение переменной A1: ");
	scanf_s("%f", &A1);
	printf("Введите значение переменной B1: ");
	scanf_s("%f", &B1);
	printf("Введите значение переменной C1: ");
	scanf_s("%f", &C1);
	printf("Введите значение переменной A2: ");
	scanf_s("%f", &A2);
	printf("Введите значение переменной B2: ");
	scanf_s("%f", &B2);
	printf("Введите значение переменной C2: ");
	scanf_s("%f", &C2);
	s = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / s;
	y = (A1 * C2 - A2 * C1) / s;
	printf("x равен: %f\n", x);
	printf("y равен: %f\n", y);
	return 0;
}