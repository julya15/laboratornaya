#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B;
	printf("¬ведите значение переменной A: ");
	scanf_s("%f", &A);
	B = A * A; //втора€ степень
	A = B * B; //четвЄрта€ степень
	B = A * A; //восьма€ степень
	printf("A в степени 8 равно: %f\n", B);
	return 0;
}