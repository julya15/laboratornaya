#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("Введите A: ");
	scanf_s("%i", &A);
	printf("Введите B: ");
	scanf_s("%i", &B);
	if ((A > 2) & (B <= 3))
		printf("Выссказывание истино");
	else
		printf("Выссказывания не истинно");
	return 0;
}