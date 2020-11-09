#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	printf("Введите значение переменной A: ");
	scanf_s("%f", &A);
	B = A * A; //вторая степень
	C = B * A; //третья степень
	B = B * C; //пятая степень
	C = B * B; //десятая степень
	A = C * B; //пятнадцатая степень
	printf("A в степени 15 равно: %f\n", A);
	return 0;
}