#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите a: ");
	scanf_s("%i", &a);
	printf("Введите b: ");
	scanf_s("%i", &b);
	printf("Введите c: ");
	scanf_s("%i", &c);
	if ((a + b > c) & (a + c > b) & (b + c > a))
		printf("Выссказывание истино");
	else
		printf("Выссказывания не истинно");
	return 0;
}