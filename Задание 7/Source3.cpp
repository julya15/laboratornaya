#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, X, Y, s, n;
	printf("Введите вес конфет в первом пакете в кг: ");
	scanf_s("%f", &X);
	printf("Введите стоимость конфет в первом пакете: ");
	scanf_s("%f", &A);
	printf("Введите вес второго пакета конфет в кг: ");
	scanf_s("%f", &Y);
	n = A / X;
	s = n + Y * n;
	printf("Стоимость составляет: %f\n", s);
	return 0;
}