#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	printf("Введите значение переменной x: ");
	scanf_s("%f", &x);
	y = 4 * (pow(x - 3, 6)) - 7 * (pow(x - 3, 3)) + 2;
	printf("Функция y равна: %f\n", y);
	return 0;
}