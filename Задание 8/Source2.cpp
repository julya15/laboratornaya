#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, c;
	printf("Введите длинну отрезка A: ");
	scanf_s("%i", &A);
	printf("Введите длинну отрезка B: ");
	scanf_s("%i", &B);
	c = A / B;
	printf("Количество отрезков равно %i\n", c);
	return 0;
}