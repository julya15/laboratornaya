#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	printf("Введите A: ");
	scanf_s("%i", &A);
	printf("Введите B: ");
	scanf_s("%i", &B);
	printf("Введите C: ");
	scanf_s("%i", &C);
	if ((A < B) & (B < C))
		printf("Выссказывание истино");
	else
		printf("Выссказывания не истинно");
	return 0;
}