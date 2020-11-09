#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	printf("Введите значение переменной x: ");
	scanf_s("%f", &x);
	y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
	printf("Функция y равна: %f\n", y);
	return 0;
}