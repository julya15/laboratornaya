#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, b, a, c, d;
	printf("Введите четырехзначное число: ");
	scanf_s("%i", &A);
	a = A % 10;
	b = A / 1000;
	c = A % 1000 / 100;
	d = A % 100 / 10;
	if ((a == b) & (c == d))
		printf("Выссказывание истино");
	else
		printf("Выссказывания не истинно");
	return 0;
}