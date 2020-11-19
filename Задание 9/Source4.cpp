#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, S, k;
	printf("Введите A: ");
	scanf_s("%i", &A);
	printf("Введите B: ");
	scanf_s("%i", &B);
	printf("Введите C: ");
	scanf_s("%i", &C);
	k = (A / C) * (B / C);
	S = A * B - k * C * C;
	printf("Количество квадратов равно: %i\n", k);
	printf("Площадь оставшейся части равна: %i\n", S);
	return 0;
}