#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, x;
	printf("Введите значение переменной A, не равной 0: ");
	scanf_s("%f", &A);
	printf("Введите значение переменной B: ");
	scanf_s("%f", &B);
	x = -B / A;
	printf("Уравнение равно: %f\n", x);
	return 0;
}