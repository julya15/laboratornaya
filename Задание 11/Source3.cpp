#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, s1, s2;
	printf("Введите A: ");
	scanf_s("%i", &A);
	printf("Введите B: ");
	scanf_s("%i", &B);
	printf("Введите C: ");
	scanf_s("%i", &C);
	s1 = abs(A - B);
	s2 = abs(A - C);
	if (s1 > s2)
		printf("Ближайшая точка C, расстояние: %i\n", s2);
	else if (s2 > s1)
		printf("Ближайшая точка B, расстояние: %i\n", s1);
	else
		printf("Расстояние одинаковое и равно: %i\n", s2);
	return 0;
}