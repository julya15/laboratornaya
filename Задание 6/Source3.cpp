#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, D;
	printf("Введите значение переменной A: ");
	scanf_s("%f", &A);
	printf("Введите значение переменной B: ");
	scanf_s("%f", &B);
	printf("Введите значение переменной C: ");
	scanf_s("%f", &C);
	D = A;
	A = B;
	B = C;
	C = D;
	printf("Переменная A равна: %f\n", A);
	printf("Переменная B равна: %f\n", B);
	printf("Переменная C равна: %f\n", C);
	return 0;
}