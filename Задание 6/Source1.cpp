#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	printf("Введите значение переменной A: ");
	scanf_s("%f", &A);
	printf("Введите значение переменной B: ");
	scanf_s("%f", &B);
	C = A;
	A = B;
	B = C;
	printf("Переменная A равна: %f\n", A);
	printf("Переменная B равна: %f\n", B);
	return 0;
}